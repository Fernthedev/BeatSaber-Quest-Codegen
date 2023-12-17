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
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionMap)
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadActionJson;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__Flags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadFileJson;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteActionJson;
}
namespace System {
class ICloneable;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__DeviceArray;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputActionMap__Flags;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__DeviceArray;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionMap);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__DeviceArray);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson);
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6141))
// CS Name: ::InputActionMap::Flags
struct CORDL_TYPE __InputActionMap__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputActionMap__Flags_Unwrapped
enum struct ____InputActionMap__Flags_Unwrapped : int32_t {
__E_NeedToResolveBindings = static_cast<int32_t>(0x1),
__E_BindingResolutionNeedsFullReResolve = static_cast<int32_t>(0x2),
__E_ControlsForEachActionInitialized = static_cast<int32_t>(0x4),
__E_BindingsForEachActionInitialized = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NeedToResolveBindings value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::__InputActionMap__Flags const NeedToResolveBindings;

/// @brief Field BindingResolutionNeedsFullReResolve value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::__InputActionMap__Flags const BindingResolutionNeedsFullReResolve;

/// @brief Field ControlsForEachActionInitialized value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::__InputActionMap__Flags const ControlsForEachActionInitialized;

/// @brief Field BindingsForEachActionInitialized value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::__InputActionMap__Flags const BindingsForEachActionInitialized;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputActionMap__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputActionMap__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputActionMap__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__Flags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceArray
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6142))
// CS Name: ::InputActionMap::DeviceArray
struct CORDL_TYPE __InputActionMap__DeviceArray : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_HaveValue offset 0x0
 __declspec(property(get=__get_m_HaveValue, put=__set_m_HaveValue)) bool  m_HaveValue;

/// @brief Field m_DeviceCount offset 0x4
 __declspec(property(get=__get_m_DeviceCount, put=__set_m_DeviceCount)) int32_t  m_DeviceCount;

/// @brief Field m_DeviceArray offset 0x8
 __declspec(property(get=__get_m_DeviceArray, put=__set_m_DeviceArray)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_DeviceArray;

constexpr void __set_m_HaveValue(bool  value) ;

constexpr bool& __get_m_HaveValue() ;

constexpr bool const& __get_m_HaveValue() const;

constexpr void __set_m_DeviceCount(int32_t  value) ;

constexpr int32_t& __get_m_DeviceCount() ;

constexpr int32_t const& __get_m_DeviceCount() const;

constexpr void __set_m_DeviceArray(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& __get_m_DeviceArray() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __get_m_DeviceArray() const;

/// @brief Method IndexOf addr 0x2a3db38 size 0x5c virtual false final false
inline int32_t IndexOf(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Remove addr 0x2a3db94 size 0x74 virtual false final false
inline bool Remove(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Get addr 0x2a380d4 size 0xa8 virtual false final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> Get() ;

/// @brief Method Set addr 0x2a381c0 size 0x17c virtual false final false
inline bool Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices) ;

// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__DeviceArray(bool  m_HaveValue, int32_t  m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_DeviceArray) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__DeviceArray(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__DeviceArray()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::BindingOverrideListJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6143))
// CS Name: ::InputActionMap::BindingOverrideListJson
struct CORDL_TYPE __InputActionMap__BindingOverrideListJson : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field bindings offset 0x0
 __declspec(property(get=__get_bindings, put=__set_bindings)) ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  bindings;

constexpr void __set_bindings(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* __get_bindings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*> __get_bindings() const;

// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*", modifiers: "", def_value: None }]
constexpr __InputActionMap__BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  bindings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__BindingOverrideListJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__BindingOverrideListJson()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::BindingOverrideJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6144))
// CS Name: ::InputActionMap::BindingOverrideJson
struct CORDL_TYPE __InputActionMap__BindingOverrideJson : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field action offset 0x0
 __declspec(property(get=__get_action, put=__set_action)) ::StringW  action;

/// @brief Field id offset 0x8
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field path offset 0x10
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field interactions offset 0x18
 __declspec(property(get=__get_interactions, put=__set_interactions)) ::StringW  interactions;

/// @brief Field processors offset 0x20
 __declspec(property(get=__get_processors, put=__set_processors)) ::StringW  processors;

constexpr void __set_action(::StringW  value) ;

constexpr ::StringW& __get_action() ;

constexpr ::StringW const& __get_action() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_interactions(::StringW  value) ;

constexpr ::StringW& __get_interactions() ;

constexpr ::StringW const& __get_interactions() const;

constexpr void __set_processors(::StringW  value) ;

constexpr ::StringW& __get_processors() ;

constexpr ::StringW const& __get_processors() const;

/// @brief Method FromBinding addr 0x2a3dc08 size 0x20 virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding  binding) ;

// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __InputActionMap__BindingOverrideJson(::StringW  action, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__BindingOverrideJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__BindingOverrideJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::BindingJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6145))
// CS Name: ::InputActionMap::BindingJson
struct CORDL_TYPE __InputActionMap__BindingJson : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field id offset 0x8
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field path offset 0x10
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field interactions offset 0x18
 __declspec(property(get=__get_interactions, put=__set_interactions)) ::StringW  interactions;

/// @brief Field processors offset 0x20
 __declspec(property(get=__get_processors, put=__set_processors)) ::StringW  processors;

/// @brief Field groups offset 0x28
 __declspec(property(get=__get_groups, put=__set_groups)) ::StringW  groups;

/// @brief Field action offset 0x30
 __declspec(property(get=__get_action, put=__set_action)) ::StringW  action;

/// @brief Field isComposite offset 0x38
 __declspec(property(get=__get_isComposite, put=__set_isComposite)) bool  isComposite;

/// @brief Field isPartOfComposite offset 0x39
 __declspec(property(get=__get_isPartOfComposite, put=__set_isPartOfComposite)) bool  isPartOfComposite;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_interactions(::StringW  value) ;

constexpr ::StringW& __get_interactions() ;

constexpr ::StringW const& __get_interactions() const;

constexpr void __set_processors(::StringW  value) ;

constexpr ::StringW& __get_processors() ;

constexpr ::StringW const& __get_processors() const;

constexpr void __set_groups(::StringW  value) ;

constexpr ::StringW& __get_groups() ;

constexpr ::StringW const& __get_groups() const;

constexpr void __set_action(::StringW  value) ;

constexpr ::StringW& __get_action() ;

constexpr ::StringW const& __get_action() const;

constexpr void __set_isComposite(bool  value) ;

constexpr bool& __get_isComposite() ;

constexpr bool const& __get_isComposite() const;

constexpr void __set_isPartOfComposite(bool  value) ;

constexpr bool& __get_isPartOfComposite() ;

constexpr bool const& __get_isPartOfComposite() const;

/// @brief Method ToBinding addr 0x2a3dc28 size 0x118 virtual false final false
inline ::UnityEngine::InputSystem::InputBinding ToBinding() ;

/// @brief Method FromBinding addr 0x2a3dd40 size 0x90 virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__BindingJson FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding>  binding) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputActionMap__BindingJson(::StringW  name, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  action, bool  isComposite, bool  isPartOfComposite) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__BindingJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__BindingJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingJson, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ReadActionJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6146))
// CS Name: ::InputActionMap::ReadActionJson
struct CORDL_TYPE __InputActionMap__ReadActionJson : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field type offset 0x8
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field id offset 0x10
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field expectedControlType offset 0x18
 __declspec(property(get=__get_expectedControlType, put=__set_expectedControlType)) ::StringW  expectedControlType;

/// @brief Field expectedControlLayout offset 0x20
 __declspec(property(get=__get_expectedControlLayout, put=__set_expectedControlLayout)) ::StringW  expectedControlLayout;

/// @brief Field processors offset 0x28
 __declspec(property(get=__get_processors, put=__set_processors)) ::StringW  processors;

/// @brief Field interactions offset 0x30
 __declspec(property(get=__get_interactions, put=__set_interactions)) ::StringW  interactions;

/// @brief Field passThrough offset 0x38
 __declspec(property(get=__get_passThrough, put=__set_passThrough)) bool  passThrough;

/// @brief Field initialStateCheck offset 0x39
 __declspec(property(get=__get_initialStateCheck, put=__set_initialStateCheck)) bool  initialStateCheck;

/// @brief Field bindings offset 0x40
 __declspec(property(get=__get_bindings, put=__set_bindings)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_expectedControlType(::StringW  value) ;

constexpr ::StringW& __get_expectedControlType() ;

constexpr ::StringW const& __get_expectedControlType() const;

constexpr void __set_expectedControlLayout(::StringW  value) ;

constexpr ::StringW& __get_expectedControlLayout() ;

constexpr ::StringW const& __get_expectedControlLayout() const;

constexpr void __set_processors(::StringW  value) ;

constexpr ::StringW& __get_processors() ;

constexpr ::StringW const& __get_processors() const;

constexpr void __set_interactions(::StringW  value) ;

constexpr ::StringW& __get_interactions() ;

constexpr ::StringW const& __get_interactions() const;

constexpr void __set_passThrough(bool  value) ;

constexpr bool& __get_passThrough() ;

constexpr bool const& __get_passThrough() const;

constexpr void __set_initialStateCheck(bool  value) ;

constexpr bool& __get_initialStateCheck() ;

constexpr bool const& __get_initialStateCheck() const;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& __get_bindings() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& __get_bindings() const;

/// @brief Method ToAction addr 0x2a3ddd0 size 0x25c virtual false final false
inline ::UnityEngine::InputSystem::InputAction* ToAction(::StringW  actionName) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__ReadActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  expectedControlLayout, ::StringW  processors, ::StringW  interactions, bool  passThrough, bool  initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__ReadActionJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__ReadActionJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::WriteActionJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6147))
// CS Name: ::InputActionMap::WriteActionJson
struct CORDL_TYPE __InputActionMap__WriteActionJson : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field type offset 0x8
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field id offset 0x10
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field expectedControlType offset 0x18
 __declspec(property(get=__get_expectedControlType, put=__set_expectedControlType)) ::StringW  expectedControlType;

/// @brief Field processors offset 0x20
 __declspec(property(get=__get_processors, put=__set_processors)) ::StringW  processors;

/// @brief Field interactions offset 0x28
 __declspec(property(get=__get_interactions, put=__set_interactions)) ::StringW  interactions;

/// @brief Field initialStateCheck offset 0x30
 __declspec(property(get=__get_initialStateCheck, put=__set_initialStateCheck)) bool  initialStateCheck;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_expectedControlType(::StringW  value) ;

constexpr ::StringW& __get_expectedControlType() ;

constexpr ::StringW const& __get_expectedControlType() const;

constexpr void __set_processors(::StringW  value) ;

constexpr ::StringW& __get_processors() ;

constexpr ::StringW const& __get_processors() const;

constexpr void __set_interactions(::StringW  value) ;

constexpr ::StringW& __get_interactions() ;

constexpr ::StringW const& __get_interactions() const;

constexpr void __set_initialStateCheck(bool  value) ;

constexpr bool& __get_initialStateCheck() ;

constexpr bool const& __get_initialStateCheck() const;

/// @brief Method FromAction addr 0x2a3e02c size 0xbc virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction*  action) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputActionMap__WriteActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  processors, ::StringW  interactions, bool  initialStateCheck) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__WriteActionJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__WriteActionJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ReadMapJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6148))
// CS Name: ::InputActionMap::ReadMapJson
struct CORDL_TYPE __InputActionMap__ReadMapJson : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field id offset 0x8
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field actions offset 0x10
 __declspec(property(get=__get_actions, put=__set_actions)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions;

/// @brief Field bindings offset 0x18
 __declspec(property(get=__get_bindings, put=__set_bindings)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>& __get_actions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> const& __get_actions() const;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& __get_bindings() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& __get_bindings() const;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__ReadMapJson(::StringW  name, ::StringW  id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__ReadMapJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__ReadMapJson()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::WriteMapJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6149))
// CS Name: ::InputActionMap::WriteMapJson
struct CORDL_TYPE __InputActionMap__WriteMapJson : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field id offset 0x8
 __declspec(property(get=__get_id, put=__set_id)) ::StringW  id;

/// @brief Field actions offset 0x10
 __declspec(property(get=__get_actions, put=__set_actions)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>  actions;

/// @brief Field bindings offset 0x18
 __declspec(property(get=__get_bindings, put=__set_bindings)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_id(::StringW  value) ;

constexpr ::StringW& __get_id() ;

constexpr ::StringW const& __get_id() const;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>& __get_actions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*> const& __get_actions() const;

constexpr void __set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& __get_bindings() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& __get_bindings() const;

/// @brief Method FromMap addr 0x2a3e0e8 size 0x1f0 virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap*  map) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>", modifiers: "", def_value: None }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__WriteMapJson(::StringW  name, ::StringW  id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__WriteMapJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__WriteMapJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::WriteFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6150))
// CS Name: ::InputActionMap::WriteFileJson
struct CORDL_TYPE __InputActionMap__WriteFileJson : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field maps offset 0x0
 __declspec(property(get=__get_maps, put=__set_maps)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>& __get_maps() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> const& __get_maps() const;

/// @brief Method FromMap addr 0x2a3da44 size 0x8c virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method FromMaps addr 0x2a38790 size 0x388 virtual false final false
static inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps) ;

// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__WriteFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  maps) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__WriteFileJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__WriteFileJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ReadFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6151))
// CS Name: ::InputActionMap::ReadFileJson
struct CORDL_TYPE __InputActionMap__ReadFileJson : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field actions offset 0x0
 __declspec(property(get=__get_actions, put=__set_actions)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions;

/// @brief Field maps offset 0x8
 __declspec(property(get=__get_maps, put=__set_maps)) ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  maps;

constexpr void __set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>& __get_actions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> const& __get_actions() const;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>& __get_maps() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> const& __get_maps() const;

/// @brief Method ToMaps addr 0x2a3a2e4 size 0xfb0 virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> ToMaps() ;

// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: None }]
constexpr __InputActionMap__ReadFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  maps) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputActionMap__ReadFileJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputActionMap__ReadFileJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionMap
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6152))
// CS Name: ::UnityEngine.InputSystem::InputActionMap*
class CORDL_TYPE InputActionMap : public ::System::Object {
public:
// Declarations
using ReadFileJson = ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson;

using WriteFileJson = ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson;

using WriteMapJson = ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson;

using ReadMapJson = ::UnityEngine::InputSystem::__InputActionMap__ReadMapJson;

using WriteActionJson = ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson;

using ReadActionJson = ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson;

using BindingJson = ::UnityEngine::InputSystem::__InputActionMap__BindingJson;

using BindingOverrideJson = ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson;

using BindingOverrideListJson = ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson;

using DeviceArray = ::UnityEngine::InputSystem::__InputActionMap__DeviceArray;

using Flags = ::UnityEngine::InputSystem::__InputActionMap__Flags;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x140};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x140 - sizeof(::System::Object)]{};

/// @brief Field m_Name offset 0x10
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Id offset 0x18
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) ::StringW  m_Id;

/// @brief Field m_Asset offset 0x20
 __declspec(property(get=__get_m_Asset, put=__set_m_Asset)) ::UnityEngine::InputSystem::InputActionAsset*  m_Asset;

/// @brief Field m_Actions offset 0x28
 __declspec(property(get=__get_m_Actions, put=__set_m_Actions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>  m_Actions;

/// @brief Field m_Bindings offset 0x30
 __declspec(property(get=__get_m_Bindings, put=__set_m_Bindings)) ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_Bindings;

/// @brief Field m_BindingsForEachAction offset 0x38
 __declspec(property(get=__get_m_BindingsForEachAction, put=__set_m_BindingsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_BindingsForEachAction;

/// @brief Field m_ControlsForEachAction offset 0x40
 __declspec(property(get=__get_m_ControlsForEachAction, put=__set_m_ControlsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  m_ControlsForEachAction;

/// @brief Field m_EnabledActionsCount offset 0x48
 __declspec(property(get=__get_m_EnabledActionsCount, put=__set_m_EnabledActionsCount)) int32_t  m_EnabledActionsCount;

/// @brief Field m_SingletonAction offset 0x50
 __declspec(property(get=__get_m_SingletonAction, put=__set_m_SingletonAction)) ::UnityEngine::InputSystem::InputAction*  m_SingletonAction;

/// @brief Field m_MapIndexInState offset 0x58
 __declspec(property(get=__get_m_MapIndexInState, put=__set_m_MapIndexInState)) int32_t  m_MapIndexInState;

/// @brief Field m_State offset 0x60
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_BindingMask offset 0x68
 __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  m_BindingMask;

/// @brief Field m_Flags offset 0xc8
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::UnityEngine::InputSystem::__InputActionMap__Flags  m_Flags;

/// @brief Field m_ParameterOverridesCount offset 0xcc
 __declspec(property(get=__get_m_ParameterOverridesCount, put=__set_m_ParameterOverridesCount)) int32_t  m_ParameterOverridesCount;

/// @brief Field m_ParameterOverrides offset 0xd0
 __declspec(property(get=__get_m_ParameterOverrides, put=__set_m_ParameterOverrides)) ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>  m_ParameterOverrides;

/// @brief Field m_Devices offset 0xd8
 __declspec(property(get=__get_m_Devices, put=__set_m_Devices)) ::UnityEngine::InputSystem::__InputActionMap__DeviceArray  m_Devices;

/// @brief Field m_ActionCallbacks offset 0xe8
 __declspec(property(get=__get_m_ActionCallbacks, put=__set_m_ActionCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  m_ActionCallbacks;

/// @brief Field m_ActionIndexByNameOrId offset 0x138
 __declspec(property(get=__get_m_ActionIndexByNameOrId, put=__set_m_ActionIndexByNameOrId)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  m_ActionIndexByNameOrId;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_asset)) ::UnityEngine::InputSystem::InputActionAsset*  asset;

 __declspec(property(get=get_id)) ::System::Guid  id;

 __declspec(property(get=get_idDontGenerate)) ::System::Guid  idDontGenerate;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_actions)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  actions;

 __declspec(property(get=get_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  bindings;

 __declspec(property(get=UnityEngine_InputSystem_IInputActionCollection2_get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  UnityEngine_InputSystem_IInputActionCollection2_bindings;

 __declspec(property(get=get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>  controlSchemes;

 __declspec(property(get=get_bindingMask, put=set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

 __declspec(property(get=get_devices, put=set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::InputAction*  Item[];

 __declspec(property(get=get_needToResolveBindings, put=set_needToResolveBindings)) bool  needToResolveBindings;

 __declspec(property(get=get_bindingResolutionNeedsFullReResolve, put=set_bindingResolutionNeedsFullReResolve)) bool  bindingResolutionNeedsFullReResolve;

 __declspec(property(get=get_controlsForEachActionInitialized, put=set_controlsForEachActionInitialized)) bool  controlsForEachActionInitialized;

 __declspec(property(get=get_bindingsForEachActionInitialized, put=set_bindingsForEachActionInitialized)) bool  bindingsForEachActionInitialized;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Id(::StringW  value) ;

constexpr ::StringW& __get_m_Id() ;

constexpr ::StringW const& __get_m_Id() const;

constexpr void __set_m_Asset(::UnityEngine::InputSystem::InputActionAsset*  value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset* __get_m_Asset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> __get_m_Asset() const;

constexpr void __set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>& __get_m_Actions() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*> const& __get_m_Actions() const;

constexpr void __set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& __get_m_Bindings() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& __get_m_Bindings() const;

constexpr void __set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& __get_m_BindingsForEachAction() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& __get_m_BindingsForEachAction() const;

constexpr void __set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>& __get_m_ControlsForEachAction() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*> const& __get_m_ControlsForEachAction() const;

constexpr void __set_m_EnabledActionsCount(int32_t  value) ;

constexpr int32_t& __get_m_EnabledActionsCount() ;

constexpr int32_t const& __get_m_EnabledActionsCount() const;

constexpr void __set_m_SingletonAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr ::UnityEngine::InputSystem::InputAction* __get_m_SingletonAction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> __get_m_SingletonAction() const;

constexpr void __set_m_MapIndexInState(int32_t  value) ;

constexpr int32_t& __get_m_MapIndexInState() ;

constexpr int32_t const& __get_m_MapIndexInState() const;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState*  value) ;

constexpr ::UnityEngine::InputSystem::InputActionState* __get_m_State() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> __get_m_State() const;

constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __get_m_BindingMask() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __get_m_BindingMask() const;

constexpr void __set_m_Flags(::UnityEngine::InputSystem::__InputActionMap__Flags  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags& __get_m_Flags() ;

constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags const& __get_m_Flags() const;

constexpr void __set_m_ParameterOverridesCount(int32_t  value) ;

constexpr int32_t& __get_m_ParameterOverridesCount() ;

constexpr int32_t const& __get_m_ParameterOverridesCount() const;

constexpr void __set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>& __get_m_ParameterOverrides() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const& __get_m_ParameterOverrides() const;

constexpr void __set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& __get_m_Devices() ;

constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& __get_m_Devices() const;

constexpr void __set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& __get_m_ActionCallbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& __get_m_ActionCallbacks() const;

constexpr void __set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* __get_m_ActionIndexByNameOrId() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> __get_m_ActionIndexByNameOrId() const;

static inline void setStaticF_s_DeferBindingResolution(int32_t  value) ;

static inline int32_t getStaticF_s_DeferBindingResolution() ;

/// @brief Method get_name addr 0x2a3b710 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method get_asset addr 0x2a3b718 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputActionAsset* get_asset() ;

/// @brief Method get_id addr 0x2a3b720 size 0x64 virtual false final false
inline ::System::Guid get_id() ;

/// @brief Method get_idDontGenerate addr 0x2a39208 size 0x48 virtual false final false
inline ::System::Guid get_idDontGenerate() ;

/// @brief Method get_enabled addr 0x2a37df8 size 0x10 virtual false final false
inline bool get_enabled() ;

/// @brief Method get_actions addr 0x2a3b660 size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> get_actions() ;

/// @brief Method get_bindings addr 0x2a3b7b8 size 0x60 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method UnityEngine.InputSystem.IInputActionCollection2.get_bindings addr 0x2a3b818 size 0x64 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_get_bindings() ;

/// @brief Method get_controlSchemes addr 0x2a3b87c size 0x84 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method get_bindingMask addr 0x2a3b900 size 0x10 virtual true final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x2a3b910 size 0x13c virtual true final true
inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

/// @brief Method get_devices addr 0x2a36f44 size 0xe0 virtual true final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices() ;

/// @brief Method set_devices addr 0x2a3ba4c size 0x44 virtual true final true
inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value) ;

/// @brief Method get_Item addr 0x2a3ba90 size 0xe8 virtual false final false
inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW  actionNameOrId) ;

/// @brief Method add_actionTriggered addr 0x2a3bb78 size 0x58 virtual false final false
inline void add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

/// @brief Method remove_actionTriggered addr 0x2a3bbd0 size 0x58 virtual false final false
inline void remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor() ;

/// @brief Method .ctor addr 0x2a36e00 size 0x10 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2a3bc28 size 0x30 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method Dispose addr 0x2a3bc58 size 0x14 virtual true final true
inline void Dispose() ;

/// @brief Method FindActionIndex addr 0x2a3bc6c size 0x204 virtual false final false
inline int32_t FindActionIndex(::StringW  nameOrId) ;

/// @brief Method SetUpActionLookupTable addr 0x2a3be70 size 0x120 virtual false final false
inline void SetUpActionLookupTable() ;

/// @brief Method ClearActionLookupTable addr 0x2a3bf90 size 0x58 virtual false final false
inline void ClearActionLookupTable() ;

/// @brief Method FindActionIndex addr 0x2a3bfe8 size 0x94 virtual false final false
inline int32_t FindActionIndex(::System::Guid  id) ;

/// @brief Method FindAction addr 0x2a38d54 size 0x11c virtual true final true
inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW  actionNameOrId, bool  throwIfNotFound) ;

/// @brief Method FindAction addr 0x2a39358 size 0x48 virtual false final false
inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid  id) ;

/// @brief Method IsUsableWithDevice addr 0x2a39720 size 0x118 virtual false final false
inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Enable addr 0x2a39998 size 0x4c virtual true final true
inline void Enable() ;

/// @brief Method Disable addr 0x2a39b44 size 0x34 virtual true final true
inline void Disable() ;

/// @brief Method Clone addr 0x2a3c07c size 0x21c virtual false final false
inline ::UnityEngine::InputSystem::InputActionMap* Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x2a3c298 size 0x4 virtual true final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method Contains addr 0x2a3c29c size 0x2c virtual true final true
inline bool Contains(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method ToString addr 0x2a3c2c8 size 0xc8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetEnumerator addr 0x2a3c390 size 0xa0 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2a3c430 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_needToResolveBindings addr 0x2a3c434 size 0xc virtual false final false
inline bool get_needToResolveBindings() ;

/// @brief Method set_needToResolveBindings addr 0x2a3c440 size 0x1c virtual false final false
inline void set_needToResolveBindings(bool  value) ;

/// @brief Method get_bindingResolutionNeedsFullReResolve addr 0x2a3c45c size 0xc virtual false final false
inline bool get_bindingResolutionNeedsFullReResolve() ;

/// @brief Method set_bindingResolutionNeedsFullReResolve addr 0x2a3c468 size 0x1c virtual false final false
inline void set_bindingResolutionNeedsFullReResolve(bool  value) ;

/// @brief Method get_controlsForEachActionInitialized addr 0x2a3c484 size 0xc virtual false final false
inline bool get_controlsForEachActionInitialized() ;

/// @brief Method set_controlsForEachActionInitialized addr 0x2a3c490 size 0x1c virtual false final false
inline void set_controlsForEachActionInitialized(bool  value) ;

/// @brief Method get_bindingsForEachActionInitialized addr 0x2a3c4ac size 0xc virtual false final false
inline bool get_bindingsForEachActionInitialized() ;

/// @brief Method set_bindingsForEachActionInitialized addr 0x2a3c4b8 size 0x1c virtual false final false
inline void set_bindingsForEachActionInitialized(bool  value) ;

/// @brief Method GetBindingsForSingleAction addr 0x2a35c8c size 0x80 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method GetControlsForSingleAction addr 0x2a35d84 size 0x80 virtual false final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method SetUpPerActionControlAndBindingArrays addr 0x2a3c4d4 size 0x5f0 virtual false final false
inline void SetUpPerActionControlAndBindingArrays() ;

/// @brief Method OnWantToChangeSetup addr 0x2a39d1c size 0x29c virtual false final false
inline void OnWantToChangeSetup() ;

/// @brief Method OnSetupChanged addr 0x2a3a03c size 0x1d8 virtual false final false
inline void OnSetupChanged() ;

/// @brief Method OnBindingModified addr 0x2a3caec size 0x1c virtual false final false
inline void OnBindingModified() ;

/// @brief Method ClearCachedActionData addr 0x2a3cac4 size 0x28 virtual false final false
inline void ClearCachedActionData(bool  onlyControls) ;

/// @brief Method GenerateId addr 0x2a3b784 size 0x34 virtual false final false
inline void GenerateId() ;

/// @brief Method LazyResolveBindings addr 0x2a35bb8 size 0xa4 virtual false final false
inline bool LazyResolveBindings(bool  fullResolve) ;

/// @brief Method ResolveBindingsIfNecessary addr 0x2a35d50 size 0x34 virtual false final false
inline bool ResolveBindingsIfNecessary() ;

/// @brief Method ResolveBindings addr 0x2a3cb08 size 0xbc8 virtual false final false
inline void ResolveBindings() ;

/// @brief Method FindBinding addr 0x2a38f5c size 0xe0 virtual true final true
inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ByRef<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method FindBindingRelativeToMap addr 0x2a3d7b0 size 0xb8 virtual false final false
inline int32_t FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding  mask) ;

/// @brief Method FromJson addr 0x2a3d868 size 0xb4 virtual false final false
static inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> FromJson(::StringW  json) ;

/// @brief Method ToJson addr 0x2a3d91c size 0xb8 virtual false final false
static inline ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps) ;

/// @brief Method ToJson addr 0x2a3d9d4 size 0x70 virtual false final false
inline ::StringW ToJson() ;

/// @brief Method OnBeforeSerialize addr 0x2a3dad0 size 0x4 virtual true final true
inline void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2a3dad4 size 0x64 virtual true final true
inline void OnAfterDeserialize() ;

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionMap(InputActionMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionMap(InputActionMap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputActionMap()  = default;
public:


// Fields

// Static field s_DeferBindingResolution


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap, 0x140>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__Flags, "UnityEngine.InputSystem", "InputActionMap/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap*, "UnityEngine.InputSystem", "InputActionMap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingJson, "UnityEngine.InputSystem", "InputActionMap/BindingJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__DeviceArray, "UnityEngine.InputSystem", "InputActionMap/DeviceArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, "UnityEngine.InputSystem", "InputActionMap/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, "UnityEngine.InputSystem", "InputActionMap/ReadMapJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, "UnityEngine.InputSystem", "InputActionMap/WriteFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, "UnityEngine.InputSystem", "InputActionMap/WriteMapJson");
