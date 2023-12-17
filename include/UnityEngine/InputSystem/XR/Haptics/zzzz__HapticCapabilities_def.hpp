#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticCapabilities)
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities);
// Type: UnityEngine.InputSystem.XR.Haptics::HapticCapabilities
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6345))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::HapticCapabilities
struct CORDL_TYPE HapticCapabilities : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <numChannels>k__BackingField offset 0x0
 __declspec(property(get=__get__numChannels_k__BackingField, put=__set__numChannels_k__BackingField)) uint32_t  _numChannels_k__BackingField;

/// @brief Field <frequencyHz>k__BackingField offset 0x4
 __declspec(property(get=__get__frequencyHz_k__BackingField, put=__set__frequencyHz_k__BackingField)) uint32_t  _frequencyHz_k__BackingField;

/// @brief Field <maxBufferSize>k__BackingField offset 0x8
 __declspec(property(get=__get__maxBufferSize_k__BackingField, put=__set__maxBufferSize_k__BackingField)) uint32_t  _maxBufferSize_k__BackingField;

 __declspec(property(get=get_numChannels, put=set_numChannels)) uint32_t  numChannels;

 __declspec(property(get=get_frequencyHz, put=set_frequencyHz)) uint32_t  frequencyHz;

 __declspec(property(get=get_maxBufferSize, put=set_maxBufferSize)) uint32_t  maxBufferSize;

constexpr void __set__numChannels_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__numChannels_k__BackingField() ;

constexpr uint32_t const& __get__numChannels_k__BackingField() const;

constexpr void __set__frequencyHz_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__frequencyHz_k__BackingField() ;

constexpr uint32_t const& __get__frequencyHz_k__BackingField() const;

constexpr void __set__maxBufferSize_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__maxBufferSize_k__BackingField() ;

constexpr uint32_t const& __get__maxBufferSize_k__BackingField() const;

/// @brief Method .ctor addr 0x2ac98a4 size 0xc virtual false final false
inline void _ctor(uint32_t  numChannels, uint32_t  frequencyHz, uint32_t  maxBufferSize) ;

/// @brief Method get_numChannels addr 0x2ac98b0 size 0x8 virtual false final false
inline uint32_t get_numChannels() ;

/// @brief Method set_numChannels addr 0x2ac98b8 size 0x8 virtual false final false
inline void set_numChannels(uint32_t  value) ;

/// @brief Method get_frequencyHz addr 0x2ac98c0 size 0x8 virtual false final false
inline uint32_t get_frequencyHz() ;

/// @brief Method set_frequencyHz addr 0x2ac98c8 size 0x8 virtual false final false
inline void set_frequencyHz(uint32_t  value) ;

/// @brief Method get_maxBufferSize addr 0x2ac98d0 size 0x8 virtual false final false
inline uint32_t get_maxBufferSize() ;

/// @brief Method set_maxBufferSize addr 0x2ac98d8 size 0x8 virtual false final false
inline void set_maxBufferSize(uint32_t  value) ;

// Ctor Parameters [CppParam { name: "_numChannels_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_frequencyHz_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_maxBufferSize_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HapticCapabilities(uint32_t  _numChannels_k__BackingField, uint32_t  _frequencyHz_k__BackingField, uint32_t  _maxBufferSize_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HapticCapabilities(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HapticCapabilities()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, "UnityEngine.InputSystem.XR.Haptics", "HapticCapabilities");
