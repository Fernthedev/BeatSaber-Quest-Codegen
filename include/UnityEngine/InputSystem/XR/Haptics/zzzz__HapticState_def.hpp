#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticState)
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::HapticState);
// Type: UnityEngine.InputSystem.XR.Haptics::HapticState
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6343))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::HapticState
struct CORDL_TYPE HapticState : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <samplesQueued>k__BackingField offset 0x0
 __declspec(property(get=__get__samplesQueued_k__BackingField, put=__set__samplesQueued_k__BackingField)) uint32_t  _samplesQueued_k__BackingField;

/// @brief Field <samplesAvailable>k__BackingField offset 0x4
 __declspec(property(get=__get__samplesAvailable_k__BackingField, put=__set__samplesAvailable_k__BackingField)) uint32_t  _samplesAvailable_k__BackingField;

 __declspec(property(get=get_samplesQueued, put=set_samplesQueued)) uint32_t  samplesQueued;

 __declspec(property(get=get_samplesAvailable, put=set_samplesAvailable)) uint32_t  samplesAvailable;

constexpr void __set__samplesQueued_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__samplesQueued_k__BackingField() ;

constexpr uint32_t const& __get__samplesQueued_k__BackingField() const;

constexpr void __set__samplesAvailable_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__samplesAvailable_k__BackingField() ;

constexpr uint32_t const& __get__samplesAvailable_k__BackingField() const;

/// @brief Method .ctor addr 0x2ac97c4 size 0x8 virtual false final false
inline void _ctor(uint32_t  samplesQueued, uint32_t  samplesAvailable) ;

/// @brief Method get_samplesQueued addr 0x2ac97cc size 0x8 virtual false final false
inline uint32_t get_samplesQueued() ;

/// @brief Method set_samplesQueued addr 0x2ac97d4 size 0x8 virtual false final false
inline void set_samplesQueued(uint32_t  value) ;

/// @brief Method get_samplesAvailable addr 0x2ac97dc size 0x8 virtual false final false
inline uint32_t get_samplesAvailable() ;

/// @brief Method set_samplesAvailable addr 0x2ac97e4 size 0x8 virtual false final false
inline void set_samplesAvailable(uint32_t  value) ;

// Ctor Parameters [CppParam { name: "_samplesQueued_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_samplesAvailable_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HapticState(uint32_t  _samplesQueued_k__BackingField, uint32_t  _samplesAvailable_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HapticState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HapticState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::HapticState, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::HapticState, "UnityEngine.InputSystem.XR.Haptics", "HapticState");
