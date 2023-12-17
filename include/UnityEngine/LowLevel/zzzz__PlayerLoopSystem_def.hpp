#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopSystem)
namespace System {
class Object;
}
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction);
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystem);
// Type: ::UpdateFunction
namespace UnityEngine::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10473))
// CS Name: ::PlayerLoopSystem::UpdateFunction*
class CORDL_TYPE __PlayerLoopSystem__UpdateFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2cfa698 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2cfa754 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerLoopSystem__UpdateFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayerLoopSystem__UpdateFunction(__PlayerLoopSystem__UpdateFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerLoopSystem__UpdateFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayerLoopSystem__UpdateFunction(__PlayerLoopSystem__UpdateFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayerLoopSystem__UpdateFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::LowLevel
// Type: UnityEngine.LowLevel::PlayerLoopSystem
namespace UnityEngine::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10474))
// CS Name: ::UnityEngine.LowLevel::PlayerLoopSystem
struct CORDL_TYPE PlayerLoopSystem : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
using UpdateFunction = ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field subSystemList offset 0x8
 __declspec(property(get=__get_subSystemList, put=__set_subSystemList)) ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>  subSystemList;

/// @brief Field updateDelegate offset 0x10
 __declspec(property(get=__get_updateDelegate, put=__set_updateDelegate)) ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  updateDelegate;

/// @brief Field updateFunction offset 0x18
 __declspec(property(get=__get_updateFunction, put=__set_updateFunction)) ::cordl_internals::intptr_t  updateFunction;

/// @brief Field loopConditionFunction offset 0x20
 __declspec(property(get=__get_loopConditionFunction, put=__set_loopConditionFunction)) ::cordl_internals::intptr_t  loopConditionFunction;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_subSystemList(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>  value) ;

constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>& __get_subSystemList() ;

constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> const& __get_subSystemList() const;

constexpr void __set_updateDelegate(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  value) ;

constexpr ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* __get_updateDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*> __get_updateDelegate() const;

constexpr void __set_updateFunction(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_updateFunction() ;

constexpr ::cordl_internals::intptr_t const& __get_updateFunction() const;

constexpr void __set_loopConditionFunction(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_loopConditionFunction() ;

constexpr ::cordl_internals::intptr_t const& __get_loopConditionFunction() const;

/// @brief Method ToString addr 0x2cfa678 size 0x20 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "subSystemList", ty: "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr PlayerLoopSystem(::System::Type*  type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>  subSystemList, ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  updateDelegate, ::cordl_internals::intptr_t  updateFunction, ::cordl_internals::intptr_t  loopConditionFunction) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayerLoopSystem(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayerLoopSystem()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystem, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::LowLevel
NEED_NO_BOX(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
