#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyArray_1)
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct __ReadOnlyArray_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDSupport__HIDPageUsage;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventTrace__DeviceInfo;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__DeviceRequirement;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct __ReadOnlyArray_1__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct ReadOnlyArray_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<float_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::EnhancedTouch::Touch>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputBinding>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputControlScheme>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Users::InputUser>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
struct __ReadOnlyArray_1__Enumerator<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct __ReadOnlyArray_1__Enumerator<float_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator);
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 4897 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 4896 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 4387 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3304 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Users::InputUser  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::InputUser>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Users::InputUser get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3143 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3128 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::EnhancedTouch::Touch> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::EnhancedTouch::Touch  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3114 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NamedValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::NamedValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NamedValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::NamedValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3113 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::NameAndParameters  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3107 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::InputControlScheme  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::InputControlScheme get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 3105 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::InputBinding  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::InputBinding get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 2598 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 391 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<float_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<float_t,::Array<float_t>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) float_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_Array() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<float_t,::Array<float_t>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6700))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6700), inst: 2 })
// CS Name: ::ReadOnlyArray`1::Enumerator<TValue>
struct CORDL_TYPE __ReadOnlyArray_1__Enumerator<TValue> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<TValue,::Array<TValue>*>  m_Array;

/// @brief Field m_IndexStart offset 0x8
 __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart)) int32_t  m_IndexStart;

/// @brief Field m_IndexEnd offset 0xc
 __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd)) int32_t  m_IndexEnd;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::ArrayW<TValue,::Array<TValue>*>  value) ;

constexpr ::ArrayW<TValue,::Array<TValue>*>& __get_m_Array() ;

constexpr ::ArrayW<TValue,::Array<TValue>*> const& __get_m_Array() const;

constexpr void __set_m_IndexStart(int32_t  value) ;

constexpr int32_t& __get_m_IndexStart() ;

constexpr int32_t const& __get_m_IndexStart() const;

constexpr void __set_m_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_m_IndexEnd() ;

constexpr int32_t const& __get_m_IndexEnd() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<TValue,::Array<TValue>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReadOnlyArray_1__Enumerator(::ArrayW<TValue,::Array<TValue>*>  m_Array, int32_t  m_IndexStart, int32_t  m_IndexEnd, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReadOnlyArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReadOnlyArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 4897 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__LowLevel____InputEventTrace__DeviceInfo_(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo,::Array<::UnityEngine::InputSystem::LowLevel::__InputEventTrace__DeviceInfo>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 4896 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__HID____HIDSupport__HIDPageUsage_(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 4387 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__Layouts____InputControlLayout__ControlItem_(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3304 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Users::InputUser>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Users::InputUser  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Users::InputUser>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::InputUser>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Users::InputUser>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::Users::InputUser>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Users::InputUser> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::InputUser>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__Users__InputUser_(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Users::InputUser get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3143 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem____InputControlScheme__DeviceRequirement_(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3128 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::EnhancedTouch::Touch>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::EnhancedTouch::Touch  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::EnhancedTouch::Touch> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__EnhancedTouch__Touch_(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3114 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NamedValue>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Utilities::NamedValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::NamedValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::NamedValue>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::Utilities::NamedValue>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NamedValue> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NamedValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__Utilities__NamedValue_(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::NamedValue get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue,::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3113 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NameAndParameters>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Utilities::NameAndParameters  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::NameAndParameters> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__Utilities__NameAndParameters_(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3107 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputControlScheme>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::InputControlScheme  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::InputControlScheme>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::InputControlScheme>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputControlScheme> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlScheme>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__InputControlScheme_(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::InputControlScheme get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3105 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputBinding>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::InputBinding  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputBinding>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::InputBinding>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::InputBinding>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::InputBinding> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__InputBinding_(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::InputBinding get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 2598 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::Utilities::InternedString  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::Utilities::InternedString>*() ;

constexpr void __set_m_Array(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __get_m_Array() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<::UnityEngine::InputSystem::Utilities::InternedString>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1___UnityEngine__InputSystem__Utilities__InternedString_(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::Utilities::InternedString get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 391 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<float_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<float_t,::Array<float_t>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) float_t  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<float_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<float_t>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() ;

constexpr void __set_m_Array(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_Array() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<float_t>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<float_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<float_t>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_float_t_(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<float_t,::Array<float_t>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6701))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 2 })
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1<TValue> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::ArrayW<TValue,::Array<TValue>*>  m_Array;

/// @brief Field m_StartIndex offset 0x8
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() ;

constexpr void __set_m_Array(::ArrayW<TValue,::Array<TValue>*>  value) ;

constexpr ::ArrayW<TValue,::Array<TValue>*>& __get_m_Array() ;

constexpr ::ArrayW<TValue,::Array<TValue>*> const& __get_m_Array() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<TValue,::Array<TValue>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<TValue,::Array<TValue>*>  array, int32_t  index, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<TValue,::Array<TValue>*> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(::System::Predicate_1<TValue>*  predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_(::ArrayW<TValue,::Array<TValue>*>  array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Item(int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<TValue,::Array<TValue>*>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlyArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1/Enumerator");
