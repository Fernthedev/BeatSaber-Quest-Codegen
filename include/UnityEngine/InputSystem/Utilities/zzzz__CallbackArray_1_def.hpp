#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackArray_1)
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TDelegate>
struct CallbackArray_1<TDelegate>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::CallbackArray_1);
// Type: UnityEngine.InputSystem.Utilities::CallbackArray`1
// Type: UnityEngine.InputSystem.Utilities::CallbackArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TDelegate>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6660))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6660), inst: 2 })
// CS Name: ::UnityEngine.InputSystem.Utilities::CallbackArray`1<TDelegate>
struct CORDL_TYPE CallbackArray_1<TDelegate> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_CannotMutateCallbacksArray offset 0x0
 __declspec(property(get=__get_m_CannotMutateCallbacksArray, put=__set_m_CannotMutateCallbacksArray)) bool  m_CannotMutateCallbacksArray;

/// @brief Field m_Callbacks offset 0x8
 __declspec(property(get=__get_m_Callbacks, put=__set_m_Callbacks)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_Callbacks;

/// @brief Field m_CallbacksToAdd offset 0x20
 __declspec(property(get=__get_m_CallbacksToAdd, put=__set_m_CallbacksToAdd)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToAdd;

/// @brief Field m_CallbacksToRemove offset 0x38
 __declspec(property(get=__get_m_CallbacksToRemove, put=__set_m_CallbacksToRemove)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToRemove;

 __declspec(property(get=get_length)) int32_t  length;

 __declspec(property(get=get_Item)) TDelegate  Item[];

constexpr void __set_m_CannotMutateCallbacksArray(bool  value) ;

constexpr bool& __get_m_CannotMutateCallbacksArray() ;

constexpr bool const& __get_m_CannotMutateCallbacksArray() const;

constexpr void __set_m_Callbacks(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& __get_m_Callbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> const& __get_m_Callbacks() const;

constexpr void __set_m_CallbacksToAdd(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& __get_m_CallbacksToAdd() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> const& __get_m_CallbacksToAdd() const;

constexpr void __set_m_CallbacksToRemove(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>& __get_m_CallbacksToRemove() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> const& __get_m_CallbacksToRemove() const;

/// @brief Method get_length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline TDelegate get_Item(int32_t  index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method AddCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddCallback(TDelegate  dlg) ;

/// @brief Method RemoveCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveCallback(TDelegate  dlg) ;

/// @brief Method LockForChanges addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LockForChanges() ;

/// @brief Method UnlockForChanges addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnlockForChanges() ;

// Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Callbacks", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToAdd", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToRemove", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }]
constexpr CallbackArray_1(bool  m_CannotMutateCallbacksArray, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_Callbacks, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToAdd, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToRemove) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CallbackArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CallbackArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::CallbackArray_1, "UnityEngine.InputSystem.Utilities", "CallbackArray`1");
