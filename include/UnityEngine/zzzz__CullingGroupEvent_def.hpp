#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroupEvent)
// Forward declare root types
namespace UnityEngine {
struct CullingGroupEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CullingGroupEvent);
// Type: UnityEngine::CullingGroupEvent
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10146))
// CS Name: ::UnityEngine::CullingGroupEvent
struct CORDL_TYPE CullingGroupEvent : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Index offset 0x0
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

/// @brief Field m_PrevState offset 0x4
 __declspec(property(get=__get_m_PrevState, put=__set_m_PrevState)) uint8_t  m_PrevState;

/// @brief Field m_ThisState offset 0x5
 __declspec(property(get=__get_m_ThisState, put=__set_m_ThisState)) uint8_t  m_ThisState;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

constexpr void __set_m_PrevState(uint8_t  value) ;

constexpr uint8_t& __get_m_PrevState() ;

constexpr uint8_t const& __get_m_PrevState() const;

constexpr void __set_m_ThisState(uint8_t  value) ;

constexpr uint8_t& __get_m_ThisState() ;

constexpr uint8_t const& __get_m_ThisState() const;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PrevState", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ThisState", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr CullingGroupEvent(int32_t  m_Index, uint8_t  m_PrevState, uint8_t  m_ThisState) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CullingGroupEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CullingGroupEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroupEvent, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroupEvent, "UnityEngine", "CullingGroupEvent");
