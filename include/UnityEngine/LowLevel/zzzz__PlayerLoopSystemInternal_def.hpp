#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopSystemInternal)
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystemInternal);
// Type: UnityEngine.LowLevel::PlayerLoopSystemInternal
namespace UnityEngine::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10472))
// CS Name: ::UnityEngine.LowLevel::PlayerLoopSystemInternal
struct CORDL_TYPE PlayerLoopSystemInternal : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field updateDelegate offset 0x8
 __declspec(property(get=__get_updateDelegate, put=__set_updateDelegate)) ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  updateDelegate;

/// @brief Field updateFunction offset 0x10
 __declspec(property(get=__get_updateFunction, put=__set_updateFunction)) ::cordl_internals::intptr_t  updateFunction;

/// @brief Field loopConditionFunction offset 0x18
 __declspec(property(get=__get_loopConditionFunction, put=__set_loopConditionFunction)) ::cordl_internals::intptr_t  loopConditionFunction;

/// @brief Field numSubSystems offset 0x20
 __declspec(property(get=__get_numSubSystems, put=__set_numSubSystems)) int32_t  numSubSystems;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_updateDelegate(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  value) ;

constexpr ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* __get_updateDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*> __get_updateDelegate() const;

constexpr void __set_updateFunction(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_updateFunction() ;

constexpr ::cordl_internals::intptr_t const& __get_updateFunction() const;

constexpr void __set_loopConditionFunction(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_loopConditionFunction() ;

constexpr ::cordl_internals::intptr_t const& __get_loopConditionFunction() const;

constexpr void __set_numSubSystems(int32_t  value) ;

constexpr int32_t& __get_numSubSystems() ;

constexpr int32_t const& __get_numSubSystems() const;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLoopSystemInternal(::System::Type*  type, ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  updateDelegate, ::cordl_internals::intptr_t  updateFunction, ::cordl_internals::intptr_t  loopConditionFunction, int32_t  numSubSystems) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayerLoopSystemInternal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayerLoopSystemInternal()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystemInternal, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
