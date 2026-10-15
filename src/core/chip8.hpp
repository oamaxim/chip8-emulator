#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace chip8 {

inline constexpr std::size_t kMemorySize = 4096;
inline constexpr std::size_t kRegisterCount = 16;
inline constexpr std::size_t kStackDepth = 16;
inline constexpr std::uint16_t kProgramStart = 0x200;
inline constexpr std::uint16_t kFontStart = 0x050;

class Chip8 {
public:
    Chip8() = default;

private:
    std::array<std::uint8_t, kMemorySize> memory_{};
    std::array<std::uint8_t, kRegisterCount> v_{};
    std::array<std::uint16_t, kStackDepth> stack_{};
    std::uint16_t i_ = 0;
    std::uint16_t pc_ = kProgramStart;
    std::uint8_t sp_ = 0;
    std::uint8_t delay_timer_ = 0;
    std::uint8_t sound_timer_ = 0;
};

}  // namespace chip8