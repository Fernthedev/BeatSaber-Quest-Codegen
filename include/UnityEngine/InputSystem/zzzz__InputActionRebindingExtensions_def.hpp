#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions)
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__RebindingOperation;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions____c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__DisplayStringOptions;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__Parameter;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct __InputActionRebindingExtensions__RebindingOperation__Flags;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Cache;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputActionRebindingExtensions__RebindingOperation__Flags;
}
namespace GlobalNamespace {
class __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__RebindingOperation;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions____c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__Parameter;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags);
MARK_REF_PTR_T(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride);
// Type: ::Parameter
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6153))
// CS Name: ::InputActionRebindingExtensions::Parameter
struct CORDL_TYPE __InputActionRebindingExtensions__Parameter : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field instance offset 0x0
 __declspec(property(get=__get_instance, put=__set_instance)) ::System::Object*  instance;

/// @brief Field field offset 0x8
 __declspec(property(get=__get_field, put=__set_field)) ::System::Reflection::FieldInfo*  field;

/// @brief Field bindingIndex offset 0x10
 __declspec(property(get=__get_bindingIndex, put=__set_bindingIndex)) int32_t  bindingIndex;

constexpr void __set_instance(::System::Object*  value) ;

constexpr ::System::Object* __get_instance() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_instance() const;

constexpr void __set_field(::System::Reflection::FieldInfo*  value) ;

constexpr ::System::Reflection::FieldInfo* __get_field() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> __get_field() const;

constexpr void __set_bindingIndex(int32_t  value) ;

constexpr int32_t& __get_bindingIndex() ;

constexpr int32_t const& __get_bindingIndex() const;

// Ctor Parameters [CppParam { name: "instance", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputActionRebindingExtensions__Parameter(::System::Object*  instance, ::System::Reflection::FieldInfo*  field, int32_t  bindingIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionRebindingExtensions__Parameter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__Parameter()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterEnumerable
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6154))
// CS Name: ::InputActionRebindingExtensions::ParameterEnumerable
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterEnumerable : public ::bs_hook::ValueTypeWrapper<0x88> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field m_State offset 0x0
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_Parameter offset 0x8
 __declspec(property(get=__get_m_Parameter, put=__set_m_Parameter)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  m_Parameter;

/// @brief Field m_MapIndex offset 0x80
 __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex)) int32_t  m_MapIndex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState*  value) ;

constexpr ::UnityEngine::InputSystem::InputActionState* __get_m_State() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> __get_m_State() const;

constexpr void __set_m_Parameter(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride& __get_m_Parameter() ;

constexpr ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride const& __get_m_Parameter() const;

constexpr void __set_m_MapIndex(int32_t  value) ;

constexpr int32_t& __get_m_MapIndex() ;

constexpr int32_t const& __get_m_MapIndex() const;

/// @brief Method .ctor addr 0x2a3e66c size 0x34 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputActionState*  state, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  parameter, int32_t  mapIndex) ;

/// @brief Method GetEnumerator addr 0x2a3e6a0 size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator addr 0x2a43cac size 0xb8 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2a43d64 size 0xb8 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Parameter", ty: "::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputActionRebindingExtensions__ParameterEnumerable(::UnityEngine::InputSystem::InputActionState*  m_State, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  m_Parameter, int32_t  m_MapIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionRebindingExtensions__ParameterEnumerable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x88>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__ParameterEnumerable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterEnumerator
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6155))
// CS Name: ::InputActionRebindingExtensions::ParameterEnumerator
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterEnumerator : public ::bs_hook::ValueTypeWrapper<0xa8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field m_State offset 0x0
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_MapIndex offset 0x8
 __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex)) int32_t  m_MapIndex;

/// @brief Field m_BindingCurrentIndex offset 0xc
 __declspec(property(get=__get_m_BindingCurrentIndex, put=__set_m_BindingCurrentIndex)) int32_t  m_BindingCurrentIndex;

/// @brief Field m_BindingEndIndex offset 0x10
 __declspec(property(get=__get_m_BindingEndIndex, put=__set_m_BindingEndIndex)) int32_t  m_BindingEndIndex;

/// @brief Field m_InteractionCurrentIndex offset 0x14
 __declspec(property(get=__get_m_InteractionCurrentIndex, put=__set_m_InteractionCurrentIndex)) int32_t  m_InteractionCurrentIndex;

/// @brief Field m_InteractionEndIndex offset 0x18
 __declspec(property(get=__get_m_InteractionEndIndex, put=__set_m_InteractionEndIndex)) int32_t  m_InteractionEndIndex;

/// @brief Field m_ProcessorCurrentIndex offset 0x1c
 __declspec(property(get=__get_m_ProcessorCurrentIndex, put=__set_m_ProcessorCurrentIndex)) int32_t  m_ProcessorCurrentIndex;

/// @brief Field m_ProcessorEndIndex offset 0x20
 __declspec(property(get=__get_m_ProcessorEndIndex, put=__set_m_ProcessorEndIndex)) int32_t  m_ProcessorEndIndex;

/// @brief Field m_BindingMask offset 0x28
 __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask)) ::UnityEngine::InputSystem::InputBinding  m_BindingMask;

/// @brief Field m_ObjectType offset 0x80
 __declspec(property(get=__get_m_ObjectType, put=__set_m_ObjectType)) ::System::Type*  m_ObjectType;

/// @brief Field m_ParameterName offset 0x88
 __declspec(property(get=__get_m_ParameterName, put=__set_m_ParameterName)) ::StringW  m_ParameterName;

/// @brief Field m_MayBeInteraction offset 0x90
 __declspec(property(get=__get_m_MayBeInteraction, put=__set_m_MayBeInteraction)) bool  m_MayBeInteraction;

/// @brief Field m_MayBeProcessor offset 0x91
 __declspec(property(get=__get_m_MayBeProcessor, put=__set_m_MayBeProcessor)) bool  m_MayBeProcessor;

/// @brief Field m_MayBeComposite offset 0x92
 __declspec(property(get=__get_m_MayBeComposite, put=__set_m_MayBeComposite)) bool  m_MayBeComposite;

/// @brief Field m_CurrentBindingIsComposite offset 0x93
 __declspec(property(get=__get_m_CurrentBindingIsComposite, put=__set_m_CurrentBindingIsComposite)) bool  m_CurrentBindingIsComposite;

/// @brief Field m_CurrentObject offset 0x98
 __declspec(property(get=__get_m_CurrentObject, put=__set_m_CurrentObject)) ::System::Object*  m_CurrentObject;

/// @brief Field m_CurrentParameter offset 0xa0
 __declspec(property(get=__get_m_CurrentParameter, put=__set_m_CurrentParameter)) ::System::Reflection::FieldInfo*  m_CurrentParameter;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState*  value) ;

constexpr ::UnityEngine::InputSystem::InputActionState* __get_m_State() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> __get_m_State() const;

constexpr void __set_m_MapIndex(int32_t  value) ;

constexpr int32_t& __get_m_MapIndex() ;

constexpr int32_t const& __get_m_MapIndex() const;

constexpr void __set_m_BindingCurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_BindingCurrentIndex() ;

constexpr int32_t const& __get_m_BindingCurrentIndex() const;

constexpr void __set_m_BindingEndIndex(int32_t  value) ;

constexpr int32_t& __get_m_BindingEndIndex() ;

constexpr int32_t const& __get_m_BindingEndIndex() const;

constexpr void __set_m_InteractionCurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_InteractionCurrentIndex() ;

constexpr int32_t const& __get_m_InteractionCurrentIndex() const;

constexpr void __set_m_InteractionEndIndex(int32_t  value) ;

constexpr int32_t& __get_m_InteractionEndIndex() ;

constexpr int32_t const& __get_m_InteractionEndIndex() const;

constexpr void __set_m_ProcessorCurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_ProcessorCurrentIndex() ;

constexpr int32_t const& __get_m_ProcessorCurrentIndex() const;

constexpr void __set_m_ProcessorEndIndex(int32_t  value) ;

constexpr int32_t& __get_m_ProcessorEndIndex() ;

constexpr int32_t const& __get_m_ProcessorEndIndex() const;

constexpr void __set_m_BindingMask(::UnityEngine::InputSystem::InputBinding  value) ;

constexpr ::UnityEngine::InputSystem::InputBinding& __get_m_BindingMask() ;

constexpr ::UnityEngine::InputSystem::InputBinding const& __get_m_BindingMask() const;

constexpr void __set_m_ObjectType(::System::Type*  value) ;

constexpr ::System::Type* __get_m_ObjectType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_ObjectType() const;

constexpr void __set_m_ParameterName(::StringW  value) ;

constexpr ::StringW& __get_m_ParameterName() ;

constexpr ::StringW const& __get_m_ParameterName() const;

constexpr void __set_m_MayBeInteraction(bool  value) ;

constexpr bool& __get_m_MayBeInteraction() ;

constexpr bool const& __get_m_MayBeInteraction() const;

constexpr void __set_m_MayBeProcessor(bool  value) ;

constexpr bool& __get_m_MayBeProcessor() ;

constexpr bool const& __get_m_MayBeProcessor() const;

constexpr void __set_m_MayBeComposite(bool  value) ;

constexpr bool& __get_m_MayBeComposite() ;

constexpr bool const& __get_m_MayBeComposite() const;

constexpr void __set_m_CurrentBindingIsComposite(bool  value) ;

constexpr bool& __get_m_CurrentBindingIsComposite() ;

constexpr bool const& __get_m_CurrentBindingIsComposite() const;

constexpr void __set_m_CurrentObject(::System::Object*  value) ;

constexpr ::System::Object* __get_m_CurrentObject() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_CurrentObject() const;

constexpr void __set_m_CurrentParameter(::System::Reflection::FieldInfo*  value) ;

constexpr ::System::Reflection::FieldInfo* __get_m_CurrentParameter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> __get_m_CurrentParameter() const;

/// @brief Method .ctor addr 0x2a43a64 size 0x248 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputActionState*  state, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  parameter, int32_t  mapIndex) ;

/// @brief Method MoveToNextBinding addr 0x2a43f9c size 0x1bc virtual false final false
inline bool MoveToNextBinding() ;

/// @brief Method MoveToNextInteraction addr 0x2a44158 size 0x70 virtual false final false
inline bool MoveToNextInteraction() ;

/// @brief Method MoveToNextProcessor addr 0x2a442b0 size 0x70 virtual false final false
inline bool MoveToNextProcessor() ;

/// @brief Method FindParameter addr 0x2a441c8 size 0xe8 virtual false final false
inline bool FindParameter(::System::Object*  instance) ;

/// @brief Method MoveNext addr 0x2a3e714 size 0xb4 virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2a43ed0 size 0xcc virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x2a3e700 size 0x14 virtual true final true
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a44320 size 0x64 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2a44384 size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentObject", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentParameter", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }]
constexpr __InputActionRebindingExtensions__ParameterEnumerator(::UnityEngine::InputSystem::InputActionState*  m_State, int32_t  m_MapIndex, int32_t  m_BindingCurrentIndex, int32_t  m_BindingEndIndex, int32_t  m_InteractionCurrentIndex, int32_t  m_InteractionEndIndex, int32_t  m_ProcessorCurrentIndex, int32_t  m_ProcessorEndIndex, ::UnityEngine::InputSystem::InputBinding  m_BindingMask, ::System::Type*  m_ObjectType, ::StringW  m_ParameterName, bool  m_MayBeInteraction, bool  m_MayBeProcessor, bool  m_MayBeComposite, bool  m_CurrentBindingIsComposite, ::System::Object*  m_CurrentObject, ::System::Reflection::FieldInfo*  m_CurrentParameter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionRebindingExtensions__ParameterEnumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xa8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__ParameterEnumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, 0xa8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterOverride
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6156))
// CS Name: ::InputActionRebindingExtensions::ParameterOverride
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterOverride : public ::bs_hook::ValueTypeWrapper<0x78> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field objectRegistrationName offset 0x0
 __declspec(property(get=__get_objectRegistrationName, put=__set_objectRegistrationName)) ::StringW  objectRegistrationName;

/// @brief Field parameter offset 0x8
 __declspec(property(get=__get_parameter, put=__set_parameter)) ::StringW  parameter;

/// @brief Field bindingMask offset 0x10
 __declspec(property(get=__get_bindingMask, put=__set_bindingMask)) ::UnityEngine::InputSystem::InputBinding  bindingMask;

/// @brief Field value offset 0x68
 __declspec(property(get=__get_value, put=__set_value)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value;

 __declspec(property(get=get_objectType)) ::System::Type*  objectType;

constexpr void __set_objectRegistrationName(::StringW  value) ;

constexpr ::StringW& __get_objectRegistrationName() ;

constexpr ::StringW const& __get_objectRegistrationName() const;

constexpr void __set_parameter(::StringW  value) ;

constexpr ::StringW& __get_parameter() ;

constexpr ::StringW const& __get_parameter() const;

constexpr void __set_bindingMask(::UnityEngine::InputSystem::InputBinding  value) ;

constexpr ::UnityEngine::InputSystem::InputBinding& __get_bindingMask() ;

constexpr ::UnityEngine::InputSystem::InputBinding const& __get_bindingMask() const;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get_value() ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get_value() const;

/// @brief Method get_objectType addr 0x2a43e1c size 0xb4 virtual false final false
inline ::System::Type* get_objectType() ;

/// @brief Method .ctor addr 0x2a3e40c size 0xa4 virtual false final false
inline void _ctor(::StringW  parameterName, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method .ctor addr 0x2a44388 size 0x34 virtual false final false
inline void _ctor(::StringW  objectRegistrationName, ::StringW  parameterName, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method Find addr 0x2a3f400 size 0x1ac virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> Find(::UnityEngine::InputSystem::InputActionMap*  actionMap, ByRef<::UnityEngine::InputSystem::InputBinding>  binding, ::StringW  parameterName, ::StringW  objectRegistrationName) ;

/// @brief Method Find addr 0x2a443bc size 0x21c virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> Find(::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>  overrides, int32_t  overrideCount, ByRef<::UnityEngine::InputSystem::InputBinding>  binding, ::StringW  parameterName, ::StringW  objectRegistrationName) ;

/// @brief Method PickMoreSpecificOne addr 0x2a445d8 size 0x280 virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> PickMoreSpecificOne(::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>  first, ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>  second) ;

// Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr __InputActionRebindingExtensions__ParameterOverride(::StringW  objectRegistrationName, ::StringW  parameter, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionRebindingExtensions__ParameterOverride(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x78>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__ParameterOverride()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, 0x78>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6157))
// CS Name: ::InputActionRebindingExtensions::RebindingOperation::Flags
struct CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped
enum struct ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped : int32_t {
__E_Started = static_cast<int32_t>(0x1),
__E_Completed = static_cast<int32_t>(0x2),
__E_Canceled = static_cast<int32_t>(0x4),
__E_OnEventHooked = static_cast<int32_t>(0x8),
__E_OnAfterUpdateHooked = static_cast<int32_t>(0x10),
__E_DontIgnoreNoisyControls = static_cast<int32_t>(0x40),
__E_DontGeneralizePathOfSelectedControl = static_cast<int32_t>(0x80),
__E_AddNewBinding = static_cast<int32_t>(0x100),
__E_SuppressMatchingEvents = static_cast<int32_t>(0x200),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Started value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Started;

/// @brief Field Completed value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Completed;

/// @brief Field Canceled value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Canceled;

/// @brief Field OnEventHooked value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const OnEventHooked;

/// @brief Field OnAfterUpdateHooked value: static_cast<int32_t>(0x10)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const OnAfterUpdateHooked;

/// @brief Field DontIgnoreNoisyControls value: static_cast<int32_t>(0x40)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const DontIgnoreNoisyControls;

/// @brief Field DontGeneralizePathOfSelectedControl value: static_cast<int32_t>(0x80)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const DontGeneralizePathOfSelectedControl;

/// @brief Field AddNewBinding value: static_cast<int32_t>(0x100)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const AddNewBinding;

/// @brief Field SuppressMatchingEvents value: static_cast<int32_t>(0x200)
static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const SuppressMatchingEvents;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputActionRebindingExtensions__RebindingOperation__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionRebindingExtensions__RebindingOperation__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__RebindingOperation__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass32_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6158))
// CS Name: ::InputActionRebindingExtensions::RebindingOperation::<>c__DisplayClass32_0*
class CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field group offset 0x10
 __declspec(property(get=__get_group, put=__set_group)) ::StringW  group;

constexpr void __set_group(::StringW  value) ;

constexpr ::StringW& __get_group() ;

constexpr ::StringW const& __get_group() const;

static inline ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0* New_ctor() ;

/// @brief Method .ctor addr 0x2a44d5c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <WithTargetBinding>b__0 addr 0x2a467d4 size 0x24 virtual false final false
inline bool _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RebindingOperation
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6159))
// CS Name: ::InputActionRebindingExtensions::RebindingOperation*
class CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation : public ::System::Object {
public:
// Declarations
using __c__DisplayClass32_0 = ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;

using Flags = ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x178};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x178 - sizeof(::System::Object)]{};

/// @brief Field kDefaultMagnitudeThreshold offset 0x0
static constexpr float_t  kDefaultMagnitudeThreshold{0.2};

/// @brief Field m_ActionToRebind offset 0x10
 __declspec(property(get=__get_m_ActionToRebind, put=__set_m_ActionToRebind)) ::UnityEngine::InputSystem::InputAction*  m_ActionToRebind;

/// @brief Field m_BindingMask offset 0x18
 __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  m_BindingMask;

/// @brief Field m_ControlType offset 0x78
 __declspec(property(get=__get_m_ControlType, put=__set_m_ControlType)) ::System::Type*  m_ControlType;

/// @brief Field m_ExpectedLayout offset 0x80
 __declspec(property(get=__get_m_ExpectedLayout, put=__set_m_ExpectedLayout)) ::UnityEngine::InputSystem::Utilities::InternedString  m_ExpectedLayout;

/// @brief Field m_IncludePathCount offset 0x90
 __declspec(property(get=__get_m_IncludePathCount, put=__set_m_IncludePathCount)) int32_t  m_IncludePathCount;

/// @brief Field m_IncludePaths offset 0x98
 __declspec(property(get=__get_m_IncludePaths, put=__set_m_IncludePaths)) ::ArrayW<::StringW,::Array<::StringW>*>  m_IncludePaths;

/// @brief Field m_ExcludePathCount offset 0xa0
 __declspec(property(get=__get_m_ExcludePathCount, put=__set_m_ExcludePathCount)) int32_t  m_ExcludePathCount;

/// @brief Field m_ExcludePaths offset 0xa8
 __declspec(property(get=__get_m_ExcludePaths, put=__set_m_ExcludePaths)) ::ArrayW<::StringW,::Array<::StringW>*>  m_ExcludePaths;

/// @brief Field m_TargetBindingIndex offset 0xb0
 __declspec(property(get=__get_m_TargetBindingIndex, put=__set_m_TargetBindingIndex)) int32_t  m_TargetBindingIndex;

/// @brief Field m_BindingGroupForNewBinding offset 0xb8
 __declspec(property(get=__get_m_BindingGroupForNewBinding, put=__set_m_BindingGroupForNewBinding)) ::StringW  m_BindingGroupForNewBinding;

/// @brief Field m_CancelBinding offset 0xc0
 __declspec(property(get=__get_m_CancelBinding, put=__set_m_CancelBinding)) ::StringW  m_CancelBinding;

/// @brief Field m_MagnitudeThreshold offset 0xc8
 __declspec(property(get=__get_m_MagnitudeThreshold, put=__set_m_MagnitudeThreshold)) float_t  m_MagnitudeThreshold;

/// @brief Field m_Scores offset 0xd0
 __declspec(property(get=__get_m_Scores, put=__set_m_Scores)) ::ArrayW<float_t,::Array<float_t>*>  m_Scores;

/// @brief Field m_Magnitudes offset 0xd8
 __declspec(property(get=__get_m_Magnitudes, put=__set_m_Magnitudes)) ::ArrayW<float_t,::Array<float_t>*>  m_Magnitudes;

/// @brief Field m_LastMatchTime offset 0xe0
 __declspec(property(get=__get_m_LastMatchTime, put=__set_m_LastMatchTime)) double_t  m_LastMatchTime;

/// @brief Field m_StartTime offset 0xe8
 __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime)) double_t  m_StartTime;

/// @brief Field m_Timeout offset 0xf0
 __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout)) float_t  m_Timeout;

/// @brief Field m_WaitSecondsAfterMatch offset 0xf4
 __declspec(property(get=__get_m_WaitSecondsAfterMatch, put=__set_m_WaitSecondsAfterMatch)) float_t  m_WaitSecondsAfterMatch;

/// @brief Field m_Candidates offset 0xf8
 __declspec(property(get=__get_m_Candidates, put=__set_m_Candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Candidates;

/// @brief Field m_OnComplete offset 0x118
 __declspec(property(get=__get_m_OnComplete, put=__set_m_OnComplete)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  m_OnComplete;

/// @brief Field m_OnCancel offset 0x120
 __declspec(property(get=__get_m_OnCancel, put=__set_m_OnCancel)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  m_OnCancel;

/// @brief Field m_OnPotentialMatch offset 0x128
 __declspec(property(get=__get_m_OnPotentialMatch, put=__set_m_OnPotentialMatch)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  m_OnPotentialMatch;

/// @brief Field m_OnGeneratePath offset 0x130
 __declspec(property(get=__get_m_OnGeneratePath, put=__set_m_OnGeneratePath)) ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  m_OnGeneratePath;

/// @brief Field m_OnComputeScore offset 0x138
 __declspec(property(get=__get_m_OnComputeScore, put=__set_m_OnComputeScore)) ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  m_OnComputeScore;

/// @brief Field m_OnApplyBinding offset 0x140
 __declspec(property(get=__get_m_OnApplyBinding, put=__set_m_OnApplyBinding)) ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,::StringW>*  m_OnApplyBinding;

/// @brief Field m_OnEventDelegate offset 0x148
 __declspec(property(get=__get_m_OnEventDelegate, put=__set_m_OnEventDelegate)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  m_OnEventDelegate;

/// @brief Field m_OnAfterUpdateDelegate offset 0x150
 __declspec(property(get=__get_m_OnAfterUpdateDelegate, put=__set_m_OnAfterUpdateDelegate)) ::System::Action*  m_OnAfterUpdateDelegate;

/// @brief Field m_LayoutCache offset 0x158
 __declspec(property(get=__get_m_LayoutCache, put=__set_m_LayoutCache)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache  m_LayoutCache;

/// @brief Field m_PathBuilder offset 0x160
 __declspec(property(get=__get_m_PathBuilder, put=__set_m_PathBuilder)) ::System::Text::StringBuilder*  m_PathBuilder;

/// @brief Field m_Flags offset 0x168
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags  m_Flags;

/// @brief Field m_StartingActuations offset 0x170
 __declspec(property(get=__get_m_StartingActuations, put=__set_m_StartingActuations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*  m_StartingActuations;

 __declspec(property(get=get_action)) ::UnityEngine::InputSystem::InputAction*  action;

 __declspec(property(get=get_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

 __declspec(property(get=get_candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  candidates;

 __declspec(property(get=get_scores)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>  scores;

 __declspec(property(get=get_magnitudes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>  magnitudes;

 __declspec(property(get=get_selectedControl)) ::UnityEngine::InputSystem::InputControl*  selectedControl;

 __declspec(property(get=get_started)) bool  started;

 __declspec(property(get=get_completed)) bool  completed;

 __declspec(property(get=get_canceled)) bool  canceled;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_timeout)) float_t  timeout;

 __declspec(property(get=get_expectedControlType)) ::StringW  expectedControlType;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr ::UnityEngine::InputSystem::InputAction* __get_m_ActionToRebind() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> __get_m_ActionToRebind() const;

constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __get_m_BindingMask() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __get_m_BindingMask() const;

constexpr void __set_m_ControlType(::System::Type*  value) ;

constexpr ::System::Type* __get_m_ControlType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_ControlType() const;

constexpr void __set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_ExpectedLayout() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_ExpectedLayout() const;

constexpr void __set_m_IncludePathCount(int32_t  value) ;

constexpr int32_t& __get_m_IncludePathCount() ;

constexpr int32_t const& __get_m_IncludePathCount() const;

constexpr void __set_m_IncludePaths(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_IncludePaths() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_IncludePaths() const;

constexpr void __set_m_ExcludePathCount(int32_t  value) ;

constexpr int32_t& __get_m_ExcludePathCount() ;

constexpr int32_t const& __get_m_ExcludePathCount() const;

constexpr void __set_m_ExcludePaths(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_ExcludePaths() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_ExcludePaths() const;

constexpr void __set_m_TargetBindingIndex(int32_t  value) ;

constexpr int32_t& __get_m_TargetBindingIndex() ;

constexpr int32_t const& __get_m_TargetBindingIndex() const;

constexpr void __set_m_BindingGroupForNewBinding(::StringW  value) ;

constexpr ::StringW& __get_m_BindingGroupForNewBinding() ;

constexpr ::StringW const& __get_m_BindingGroupForNewBinding() const;

constexpr void __set_m_CancelBinding(::StringW  value) ;

constexpr ::StringW& __get_m_CancelBinding() ;

constexpr ::StringW const& __get_m_CancelBinding() const;

constexpr void __set_m_MagnitudeThreshold(float_t  value) ;

constexpr float_t& __get_m_MagnitudeThreshold() ;

constexpr float_t const& __get_m_MagnitudeThreshold() const;

constexpr void __set_m_Scores(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_Scores() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_Scores() const;

constexpr void __set_m_Magnitudes(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_Magnitudes() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_Magnitudes() const;

constexpr void __set_m_LastMatchTime(double_t  value) ;

constexpr double_t& __get_m_LastMatchTime() ;

constexpr double_t const& __get_m_LastMatchTime() const;

constexpr void __set_m_StartTime(double_t  value) ;

constexpr double_t& __get_m_StartTime() ;

constexpr double_t const& __get_m_StartTime() const;

constexpr void __set_m_Timeout(float_t  value) ;

constexpr float_t& __get_m_Timeout() ;

constexpr float_t const& __get_m_Timeout() const;

constexpr void __set_m_WaitSecondsAfterMatch(float_t  value) ;

constexpr float_t& __get_m_WaitSecondsAfterMatch() ;

constexpr float_t const& __get_m_WaitSecondsAfterMatch() const;

constexpr void __set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __get_m_Candidates() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __get_m_Candidates() const;

constexpr void __set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* __get_m_OnComplete() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> __get_m_OnComplete() const;

constexpr void __set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* __get_m_OnCancel() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> __get_m_OnCancel() const;

constexpr void __set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* __get_m_OnPotentialMatch() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> __get_m_OnPotentialMatch() const;

constexpr void __set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  value) ;

constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>* __get_m_OnGeneratePath() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*> __get_m_OnGeneratePath() const;

constexpr void __set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  value) ;

constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>* __get_m_OnComputeScore() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*> __get_m_OnComputeScore() const;

constexpr void __set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,::StringW>*  value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,::StringW>* __get_m_OnApplyBinding() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,::StringW>*> __get_m_OnApplyBinding() const;

constexpr void __set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>* __get_m_OnEventDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> __get_m_OnEventDelegate() const;

constexpr void __set_m_OnAfterUpdateDelegate(::System::Action*  value) ;

constexpr ::System::Action* __get_m_OnAfterUpdateDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_OnAfterUpdateDelegate() const;

constexpr void __set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache& __get_m_LayoutCache() ;

constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache const& __get_m_LayoutCache() const;

constexpr void __set_m_PathBuilder(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_m_PathBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_m_PathBuilder() const;

constexpr void __set_m_Flags(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags  value) ;

constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags& __get_m_Flags() ;

constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const& __get_m_Flags() const;

constexpr void __set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>* __get_m_StartingActuations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*> __get_m_StartingActuations() const;

/// @brief Method get_action addr 0x2a44858 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputAction* get_action() ;

/// @brief Method get_bindingMask addr 0x2a44860 size 0x10 virtual false final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method get_candidates addr 0x2a44870 size 0x14 virtual false final false
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> get_candidates() ;

/// @brief Method get_scores addr 0x2a44884 size 0x74 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_scores() ;

/// @brief Method get_magnitudes addr 0x2a448f8 size 0x74 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_magnitudes() ;

/// @brief Method get_selectedControl addr 0x2a4496c size 0x70 virtual false final false
inline ::UnityEngine::InputSystem::InputControl* get_selectedControl() ;

/// @brief Method get_started addr 0x2a449dc size 0xc virtual false final false
inline bool get_started() ;

/// @brief Method get_completed addr 0x2a449e8 size 0xc virtual false final false
inline bool get_completed() ;

/// @brief Method get_canceled addr 0x2a449f4 size 0xc virtual false final false
inline bool get_canceled() ;

/// @brief Method get_startTime addr 0x2a44a00 size 0x8 virtual false final false
inline double_t get_startTime() ;

/// @brief Method get_timeout addr 0x2a44a08 size 0x8 virtual false final false
inline float_t get_timeout() ;

/// @brief Method get_expectedControlType addr 0x2a434a0 size 0x10 virtual false final false
inline ::StringW get_expectedControlType() ;

/// @brief Method WithAction addr 0x2a4319c size 0x194 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method WithMatchingEventsBeingSuppressed addr 0x2a43464 size 0x3c virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithMatchingEventsBeingSuppressed(bool  value) ;

/// @brief Method WithCancelingThrough addr 0x2a434b0 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithCancelingThrough(::StringW  binding) ;

/// @brief Method WithCancelingThrough addr 0x2a44ab8 size 0x90 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithCancelingThrough(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method WithExpectedControlType addr 0x2a44a70 size 0x48 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType(::StringW  layoutName) ;

/// @brief Method WithExpectedControlType addr 0x2a44b48 size 0x174 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType(::System::Type*  type) ;

/// @brief Method WithExpectedControlType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType() ;

/// @brief Method WithTargetBinding addr 0x2a434d8 size 0x534 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithTargetBinding(int32_t  bindingIndex) ;

/// @brief Method WithBindingMask addr 0x2a44e90 size 0x20 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask) ;

/// @brief Method WithBindingGroup addr 0x2a44eb0 size 0x98 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithBindingGroup(::StringW  group) ;

/// @brief Method WithoutGeneralizingPathOfSelectedControl addr 0x2a44f48 size 0x10 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithoutGeneralizingPathOfSelectedControl() ;

/// @brief Method WithRebindAddingNewBinding addr 0x2a44f58 size 0x14 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithRebindAddingNewBinding(::StringW  group) ;

/// @brief Method WithMagnitudeHavingToBeGreaterThan addr 0x2a44f6c size 0xc8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithMagnitudeHavingToBeGreaterThan(float_t  magnitude) ;

/// @brief Method WithoutIgnoringNoisyControls addr 0x2a45034 size 0x24 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithoutIgnoringNoisyControls() ;

/// @brief Method WithControlsHavingToMatchPath addr 0x2a44d64 size 0x12c virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithControlsHavingToMatchPath(::StringW  path) ;

/// @brief Method WithControlsExcluding addr 0x2a43338 size 0x12c virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithControlsExcluding(::StringW  path) ;

/// @brief Method WithTimeout addr 0x2a45058 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithTimeout(float_t  timeInSeconds) ;

/// @brief Method OnComplete addr 0x2a45060 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnComplete(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  callback) ;

/// @brief Method OnCancel addr 0x2a45068 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnCancel(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  callback) ;

/// @brief Method OnPotentialMatch addr 0x2a45070 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*  callback) ;

/// @brief Method OnGeneratePath addr 0x2a45078 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  callback) ;

/// @brief Method OnComputeScore addr 0x2a45080 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  callback) ;

/// @brief Method OnApplyBinding addr 0x2a45088 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*,::StringW>*  callback) ;

/// @brief Method OnMatchWaitForAnother addr 0x2a43330 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnMatchWaitForAnother(float_t  seconds) ;

/// @brief Method Start addr 0x2a45090 size 0x168 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* Start() ;

/// @brief Method Cancel addr 0x2a453a0 size 0x10 virtual false final false
inline void Cancel() ;

/// @brief Method Complete addr 0x2a453ec size 0x10 virtual false final false
inline void Complete() ;

/// @brief Method AddCandidate addr 0x2a45708 size 0x178 virtual false final false
inline void AddCandidate(::UnityEngine::InputSystem::InputControl*  control, float_t  score, float_t  magnitude) ;

/// @brief Method RemoveCandidate addr 0x2a459a4 size 0x120 virtual false final false
inline void RemoveCandidate(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Dispose addr 0x2a45ac4 size 0x64 virtual true final true
inline void Dispose() ;

/// @brief Method Finalize addr 0x2a45c24 size 0x94 virtual true final false
inline void Finalize() ;

/// @brief Method Reset addr 0x2a45cb8 size 0x98 virtual false final false
inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* Reset() ;

/// @brief Method HookOnEvent addr 0x2a452c0 size 0xe0 virtual false final false
inline void HookOnEvent() ;

/// @brief Method UnhookOnEvent addr 0x2a45b28 size 0x88 virtual false final false
inline void UnhookOnEvent() ;

/// @brief Method OnEvent addr 0x2a45d50 size 0x74c virtual false final false
inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SortCandidatesByScore addr 0x2a45880 size 0x124 virtual false final false
inline void SortCandidatesByScore() ;

/// @brief Method HavePathMatch addr 0x2a4649c size 0x7c virtual false final false
static inline bool HavePathMatch(::UnityEngine::InputSystem::InputControl*  control, ::ArrayW<::StringW,::Array<::StringW>*>  paths, int32_t  pathCount) ;

/// @brief Method HookOnAfterUpdate addr 0x2a451f8 size 0xc8 virtual false final false
inline void HookOnAfterUpdate() ;

/// @brief Method UnhookOnAfterUpdate addr 0x2a45bb0 size 0x74 virtual false final false
inline void UnhookOnAfterUpdate() ;

/// @brief Method OnAfterUpdate addr 0x2a46518 size 0xa8 virtual false final false
inline void OnAfterUpdate() ;

/// @brief Method OnComplete addr 0x2a453fc size 0x30c virtual false final false
inline void OnComplete() ;

/// @brief Method OnCancel addr 0x2a453b0 size 0x3c virtual false final false
inline void OnCancel() ;

/// @brief Method ResetAfterMatchCompleted addr 0x2a46710 size 0xc4 virtual false final false
inline void ResetAfterMatchCompleted() ;

/// @brief Method ThrowIfRebindInProgress addr 0x2a44a10 size 0x60 virtual false final false
inline void ThrowIfRebindInProgress() ;

/// @brief Method GeneratePathForControl addr 0x2a465c0 size 0x104 virtual false final false
inline ::StringW GeneratePathForControl(::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* New_ctor() ;

/// @brief Method .ctor addr 0x2a4310c size 0x90 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputActionRebindingExtensions__RebindingOperation(__InputActionRebindingExtensions__RebindingOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputActionRebindingExtensions__RebindingOperation(__InputActionRebindingExtensions__RebindingOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__RebindingOperation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, 0x178>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::DeferBindingResolutionWrapper
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6160))
// CS Name: ::InputActionRebindingExtensions::DeferBindingResolutionWrapper*
class CORDL_TYPE __InputActionRebindingExtensions__DeferBindingResolutionWrapper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Acquire addr 0x2a43a14 size 0x50 virtual false final false
inline void Acquire() ;

/// @brief Method Dispose addr 0x2a467f8 size 0x6c virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* New_ctor() ;

/// @brief Method .ctor addr 0x2a43a0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputActionRebindingExtensions__DeferBindingResolutionWrapper(__InputActionRebindingExtensions__DeferBindingResolutionWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputActionRebindingExtensions__DeferBindingResolutionWrapper(__InputActionRebindingExtensions__DeferBindingResolutionWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions__DeferBindingResolutionWrapper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__DisplayClass25_0
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6161))
// CS Name: ::InputActionRebindingExtensions::<>c__DisplayClass25_0*
class CORDL_TYPE __InputActionRebindingExtensions____c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field bindings offset 0x10
 __declspec(property(get=__get_bindings, put=__set_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  bindings;

/// @brief Field firstPartIndex offset 0x20
 __declspec(property(get=__get_firstPartIndex, put=__set_firstPartIndex)) int32_t  firstPartIndex;

/// @brief Field partStrings offset 0x28
 __declspec(property(get=__get_partStrings, put=__set_partStrings)) ::ArrayW<::StringW,::Array<::StringW>*>  partStrings;

/// @brief Field partCount offset 0x30
 __declspec(property(get=__get_partCount, put=__set_partCount)) int32_t  partCount;

constexpr void __set_bindings(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>& __get_bindings() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> const& __get_bindings() const;

constexpr void __set_firstPartIndex(int32_t  value) ;

constexpr int32_t& __get_firstPartIndex() ;

constexpr int32_t const& __get_firstPartIndex() const;

constexpr void __set_partStrings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_partStrings() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_partStrings() const;

constexpr void __set_partCount(int32_t  value) ;

constexpr int32_t& __get_partCount() ;

constexpr int32_t const& __get_partCount() const;

static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0* New_ctor() ;

/// @brief Method .ctor addr 0x2a4054c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBindingDisplayString>b__0 addr 0x2a46864 size 0x160 virtual false final false
inline ::StringW _GetBindingDisplayString_b__0(::StringW  fragment) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputActionRebindingExtensions____c__DisplayClass25_0(__InputActionRebindingExtensions____c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputActionRebindingExtensions____c__DisplayClass25_0(__InputActionRebindingExtensions____c__DisplayClass25_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputActionRebindingExtensions____c__DisplayClass25_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionRebindingExtensions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6162))
// CS Name: ::UnityEngine.InputSystem::InputActionRebindingExtensions*
class CORDL_TYPE InputActionRebindingExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass25_0 = ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0;

using DeferBindingResolutionWrapper = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper;

using RebindingOperation = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation;

using ParameterOverride = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride;

using ParameterEnumerator = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator;

using ParameterEnumerable = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable;

using Parameter = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*  value) ;

static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* getStaticF_s_DeferBindingResolutionWrapper() ;

/// @brief Method GetParameterValue addr 0x2a3e2d8 size 0x134 virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method GetParameterValue addr 0x2a3e4b0 size 0x1bc virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  parameterOverride) ;

/// @brief Method GetParameterValue addr 0x2a3e7c8 size 0x218 virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, int32_t  bindingIndex) ;

/// @brief Method GetParameterValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static inline ::System::Nullable_1<TValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset*  asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ExtractParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method ApplyParameterOverride addr 0x2a3e9e0 size 0x14c virtual false final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x2a3eef4 size 0x198 virtual false final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x2a3f08c size 0x164 virtual false final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x2a3f1f0 size 0x210 virtual false final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, int32_t  bindingIndex) ;

/// @brief Method ApplyParameterOverride addr 0x2a3eb2c size 0x3c8 virtual false final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionState*  state, int32_t  mapIndex, ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>  parameterOverrides, ByRef<int32_t>  parameterOverridesCount, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride  parameterOverride) ;

/// @brief Method GetBindingIndex addr 0x2a3f5ac size 0x118 virtual false final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method GetBindingIndex addr 0x2a3f6c4 size 0x118 virtual false final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method GetBindingIndex addr 0x2a3f7dc size 0xc0 virtual false final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction*  action, ::StringW  group, ::StringW  path) ;

/// @brief Method GetBindingForControl addr 0x2a3f89c size 0x178 virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetBindingIndexForControl addr 0x2a3fa14 size 0x1ac virtual false final false
static inline int32_t GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetBindingDisplayString addr 0x2a3fbc0 size 0x164 virtual false final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions  options, ::StringW  group) ;

/// @brief Method GetBindingDisplayString addr 0x2a3fd24 size 0x210 virtual false final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions  options) ;

/// @brief Method GetBindingDisplayString addr 0x2a3ff34 size 0x78 virtual false final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions  options) ;

/// @brief Method GetBindingDisplayString addr 0x2a3ffac size 0x5a0 virtual false final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ByRef<::StringW>  deviceLayoutName, ByRef<::StringW>  controlPath, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions  options) ;

/// @brief Method ApplyBindingOverride addr 0x2a40554 size 0x84 virtual false final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  newPath, ::StringW  group, ::StringW  path) ;

/// @brief Method ApplyBindingOverride addr 0x2a405d8 size 0x10c virtual false final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x2a40818 size 0xc0 virtual false final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x2a40a64 size 0x9c virtual false final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::StringW  path) ;

/// @brief Method ApplyBindingOverride addr 0x2a406e4 size 0x134 virtual false final false
static inline int32_t ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x2a408d8 size 0x18c virtual false final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, int32_t  bindingIndex, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// @brief Method RemoveBindingOverride addr 0x2a40b00 size 0x80 virtual false final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex) ;

/// @brief Method RemoveBindingOverride addr 0x2a40b80 size 0x88 virtual false final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method RemoveBindingOverride addr 0x2a40c08 size 0x88 virtual false final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method RemoveAllBindingOverrides addr 0x2a40c90 size 0x540 virtual false final false
static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2*  actions) ;

/// @brief Method RemoveAllBindingOverrides addr 0x2a411d0 size 0x13c virtual false final false
static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method ApplyBindingOverrides addr 0x2a4130c size 0x388 virtual false final false
static inline void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  overrides) ;

/// @brief Method RemoveBindingOverrides addr 0x2a41694 size 0x388 virtual false final false
static inline void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  overrides) ;

/// @brief Method ApplyBindingOverridesOnMatchingControls addr 0x2a41a1c size 0x15c virtual false final false
static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ApplyBindingOverridesOnMatchingControls addr 0x2a41b78 size 0x124 virtual false final false
static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method SaveBindingOverridesAsJson addr 0x2a41c9c size 0x498 virtual false final false
static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2*  actions) ;

/// @brief Method SaveBindingOverridesAsJson addr 0x2a42318 size 0x364 virtual false final false
static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method AddBindingOverrideJsonTo addr 0x2a42134 size 0x1e4 virtual false final false
static inline void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::UnityEngine::InputSystem::InputBinding  binding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  list, ::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method LoadBindingOverridesFromJson addr 0x2a4267c size 0x1d4 virtual false final false
static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::StringW  json, bool  removeExisting) ;

/// @brief Method LoadBindingOverridesFromJson addr 0x2a42b48 size 0x1e8 virtual false final false
static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction*  action, ::StringW  json, bool  removeExisting) ;

/// @brief Method LoadBindingOverridesFromJsonInternal addr 0x2a42850 size 0x2f8 virtual false final false
static inline void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::StringW  json) ;

/// @brief Method PerformInteractiveRebinding addr 0x2a42d30 size 0x3dc virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex) ;

/// @brief Method DeferBindingResolution addr 0x2a3d6d0 size 0xe0 virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* DeferBindingResolution() ;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionRebindingExtensions(InputActionRebindingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionRebindingExtensions(InputActionRebindingExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputActionRebindingExtensions()  = default;
public:


// Fields

// Static field s_DeferBindingResolutionWrapper


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/Flags");
NEED_NO_BOX(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions*, "UnityEngine.InputSystem", "InputActionRebindingExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/DeferBindingResolutionWrapper");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, "UnityEngine.InputSystem", "InputActionRebindingExtensions/Parameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterOverride");
