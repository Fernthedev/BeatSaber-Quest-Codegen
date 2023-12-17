#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultBinder)
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Object;
}
namespace System {
struct __DefaultBinder__Primitives;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class RuntimeType;
}
namespace System {
class __DefaultBinder____c;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class __DefaultBinder__BinderState;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System {
struct __DefaultBinder__Primitives;
}
namespace System {
class DefaultBinder;
}
namespace System {
class __DefaultBinder__BinderState;
}
namespace System {
class __DefaultBinder____c;
}
// Write type traits
MARK_VAL_T(::System::__DefaultBinder__Primitives);
MARK_REF_PTR_T(::System::DefaultBinder);
MARK_REF_PTR_T(::System::__DefaultBinder__BinderState);
MARK_REF_PTR_T(::System::__DefaultBinder____c);
// Type: ::BinderState
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2551))
// CS Name: ::DefaultBinder::BinderState*
class CORDL_TYPE __DefaultBinder__BinderState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_argsMap offset 0x10
 __declspec(property(get=__get_m_argsMap, put=__set_m_argsMap)) ::ArrayW<int32_t,::Array<int32_t>*>  m_argsMap;

/// @brief Field m_originalSize offset 0x18
 __declspec(property(get=__get_m_originalSize, put=__set_m_originalSize)) int32_t  m_originalSize;

/// @brief Field m_isParamArray offset 0x1c
 __declspec(property(get=__get_m_isParamArray, put=__set_m_isParamArray)) bool  m_isParamArray;

constexpr void __set_m_argsMap(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_m_argsMap() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_m_argsMap() const;

constexpr void __set_m_originalSize(int32_t  value) ;

constexpr int32_t& __get_m_originalSize() ;

constexpr int32_t const& __get_m_originalSize() const;

constexpr void __set_m_isParamArray(bool  value) ;

constexpr bool& __get_m_isParamArray() ;

constexpr bool const& __get_m_isParamArray() const;

static inline ::System::__DefaultBinder__BinderState* New_ctor(::ArrayW<int32_t,::Array<int32_t>*>  argsMap, int32_t  originalSize, bool  isParamArray) ;

/// @brief Method .ctor addr 0x25de7d8 size 0x40 virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  argsMap, int32_t  originalSize, bool  isParamArray) ;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder__BinderState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DefaultBinder__BinderState(__DefaultBinder__BinderState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder__BinderState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DefaultBinder__BinderState(__DefaultBinder__BinderState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DefaultBinder__BinderState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder__BinderState, 0x20>, "Size mismatch!");

} // namespace end def System
// Type: ::Primitives
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2552))
// CS Name: ::DefaultBinder::Primitives
struct CORDL_TYPE __DefaultBinder__Primitives : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DefaultBinder__Primitives_Unwrapped
enum struct ____DefaultBinder__Primitives_Unwrapped : int32_t {
__E_Boolean = static_cast<int32_t>(0x8),
__E_Char = static_cast<int32_t>(0x10),
__E_SByte = static_cast<int32_t>(0x20),
__E_Byte = static_cast<int32_t>(0x40),
__E_Int16 = static_cast<int32_t>(0x80),
__E_UInt16 = static_cast<int32_t>(0x100),
__E_Int32 = static_cast<int32_t>(0x200),
__E_UInt32 = static_cast<int32_t>(0x400),
__E_Int64 = static_cast<int32_t>(0x800),
__E_UInt64 = static_cast<int32_t>(0x1000),
__E_Single = static_cast<int32_t>(0x2000),
__E_Double = static_cast<int32_t>(0x4000),
__E_Decimal = static_cast<int32_t>(0x8000),
__E_DateTime = static_cast<int32_t>(0x10000),
__E_String = static_cast<int32_t>(0x40000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Boolean value: static_cast<int32_t>(0x8)
static ::System::__DefaultBinder__Primitives const Boolean;

/// @brief Field Char value: static_cast<int32_t>(0x10)
static ::System::__DefaultBinder__Primitives const Char;

/// @brief Field SByte value: static_cast<int32_t>(0x20)
static ::System::__DefaultBinder__Primitives const SByte;

/// @brief Field Byte value: static_cast<int32_t>(0x40)
static ::System::__DefaultBinder__Primitives const Byte;

/// @brief Field Int16 value: static_cast<int32_t>(0x80)
static ::System::__DefaultBinder__Primitives const Int16;

/// @brief Field UInt16 value: static_cast<int32_t>(0x100)
static ::System::__DefaultBinder__Primitives const UInt16;

/// @brief Field Int32 value: static_cast<int32_t>(0x200)
static ::System::__DefaultBinder__Primitives const Int32;

/// @brief Field UInt32 value: static_cast<int32_t>(0x400)
static ::System::__DefaultBinder__Primitives const UInt32;

/// @brief Field Int64 value: static_cast<int32_t>(0x800)
static ::System::__DefaultBinder__Primitives const Int64;

/// @brief Field UInt64 value: static_cast<int32_t>(0x1000)
static ::System::__DefaultBinder__Primitives const UInt64;

/// @brief Field Single value: static_cast<int32_t>(0x2000)
static ::System::__DefaultBinder__Primitives const Single;

/// @brief Field Double value: static_cast<int32_t>(0x4000)
static ::System::__DefaultBinder__Primitives const Double;

/// @brief Field Decimal value: static_cast<int32_t>(0x8000)
static ::System::__DefaultBinder__Primitives const Decimal;

/// @brief Field DateTime value: static_cast<int32_t>(0x10000)
static ::System::__DefaultBinder__Primitives const DateTime;

/// @brief Field String value: static_cast<int32_t>(0x40000)
static ::System::__DefaultBinder__Primitives const String;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DefaultBinder__Primitives_Unwrapped () const noexcept {
return std::bit_cast<____DefaultBinder__Primitives_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DefaultBinder__Primitives(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DefaultBinder__Primitives(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DefaultBinder__Primitives()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder__Primitives, 0x4>, "Size mismatch!");

} // namespace end def System
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2553))
// CS Name: ::DefaultBinder::<>c*
class CORDL_TYPE __DefaultBinder____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::__DefaultBinder____c*  value) ;

static inline ::System::__DefaultBinder____c* getStaticF___9() ;

static inline void setStaticF___9__2_0(::System::Predicate_1<::System::Type*>*  value) ;

static inline ::System::Predicate_1<::System::Type*>* getStaticF___9__2_0() ;

static inline ::System::__DefaultBinder____c* New_ctor() ;

/// @brief Method .ctor addr 0x25e1be8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SelectProperty>b__2_0 addr 0x25e1bf0 size 0x5c virtual false final false
inline bool _SelectProperty_b__2_0(::System::Type*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DefaultBinder____c(__DefaultBinder____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DefaultBinder____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DefaultBinder____c(__DefaultBinder____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DefaultBinder____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DefaultBinder____c, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: System::DefaultBinder
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2554))
// CS Name: ::System::DefaultBinder*
class CORDL_TYPE DefaultBinder : public ::System::Reflection::Binder {
public:
// Declarations
using __c = ::System::__DefaultBinder____c;

using Primitives = ::System::__DefaultBinder__Primitives;

using BinderState = ::System::__DefaultBinder__BinderState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Reflection::Binder)]{};

static inline void setStaticF__primitiveConversions(::ArrayW<::System::__DefaultBinder__Primitives,::Array<::System::__DefaultBinder__Primitives>*>  value) ;

static inline ::ArrayW<::System::__DefaultBinder__Primitives,::Array<::System::__DefaultBinder__Primitives>*> getStaticF__primitiveConversions() ;

/// @brief Method BindToMethod addr 0x25dc59c size 0x1eec virtual true final false
inline ::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*,::Array<::System::Reflection::MethodBase*>*>  match, ByRef<::ArrayW<::System::Object*,::Array<::System::Object*>*>>  args, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers, ::System::Globalization::CultureInfo*  cultureInfo, ::ArrayW<::StringW,::Array<::StringW>*>  names, ByRef<::System::Object*>  state) ;

/// @brief Method BindToField addr 0x25deae8 size 0x4b4 virtual true final false
inline ::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*>  match, ::System::Object*  value, ::System::Globalization::CultureInfo*  cultureInfo) ;

/// @brief Method SelectProperty addr 0x25df084 size 0xa24 virtual true final false
inline ::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  indexes, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method ChangeType addr 0x25e0588 size 0x60 virtual true final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  type, ::System::Globalization::CultureInfo*  cultureInfo) ;

/// @brief Method ReorderArgumentArray addr 0x25e05e8 size 0x2d8 virtual true final false
inline void ReorderArgumentArray(ByRef<::ArrayW<::System::Object*,::Array<::System::Object*>*>>  args, ::System::Object*  state) ;

/// @brief Method ExactBinding addr 0x25e08c0 size 0x270 virtual false final false
static inline ::System::Reflection::MethodBase* ExactBinding(::ArrayW<::System::Reflection::MethodBase*,::Array<::System::Reflection::MethodBase*>*>  match, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method ExactPropertyBinding addr 0x25e0c80 size 0x2bc virtual false final false
static inline ::System::Reflection::PropertyInfo* ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method FindMostSpecific addr 0x25e0064 size 0x43c virtual false final false
static inline int32_t FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  p1, ::ArrayW<int32_t,::Array<int32_t>*>  paramOrder1, ::System::Type*  paramArrayType1, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  p2, ::ArrayW<int32_t,::Array<int32_t>*>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method FindMostSpecificType addr 0x25dfccc size 0x398 virtual false final false
static inline int32_t FindMostSpecificType(::System::Type*  c1, ::System::Type*  c2, ::System::Type*  t) ;

/// @brief Method FindMostSpecificMethod addr 0x25de968 size 0x180 virtual false final false
static inline int32_t FindMostSpecificMethod(::System::Reflection::MethodBase*  m1, ::ArrayW<int32_t,::Array<int32_t>*>  paramOrder1, ::System::Type*  paramArrayType1, ::System::Reflection::MethodBase*  m2, ::ArrayW<int32_t,::Array<int32_t>*>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method FindMostSpecificField addr 0x25def9c size 0xe8 virtual false final false
static inline int32_t FindMostSpecificField(::System::Reflection::FieldInfo*  cur1, ::System::Reflection::FieldInfo*  cur2) ;

/// @brief Method FindMostSpecificProperty addr 0x25e04a0 size 0xe8 virtual false final false
static inline int32_t FindMostSpecificProperty(::System::Reflection::PropertyInfo*  cur1, ::System::Reflection::PropertyInfo*  cur2) ;

/// @brief Method CompareMethodSigAndName addr 0x25e0f3c size 0x15c virtual false final false
static inline bool CompareMethodSigAndName(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2) ;

/// @brief Method GetHierarchyDepth addr 0x25e1098 size 0x94 virtual false final false
static inline int32_t GetHierarchyDepth(::System::Type*  t) ;

/// @brief Method FindMostDerivedNewSlotMeth addr 0x25e0b30 size 0x150 virtual false final false
static inline ::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*,::Array<::System::Reflection::MethodBase*>*>  match, int32_t  cMatches) ;

/// @brief Method ReorderParams addr 0x25de818 size 0x150 virtual false final false
static inline void ReorderParams(::ArrayW<int32_t,::Array<int32_t>*>  paramOrder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  vars) ;

/// @brief Method CreateParamOrder addr 0x25de488 size 0x240 virtual false final false
static inline bool CreateParamOrder(::ArrayW<int32_t,::Array<int32_t>*>  paramOrder, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  pars, ::ArrayW<::StringW,::Array<::StringW>*>  names) ;

/// @brief Method CanConvertPrimitive addr 0x25dfaa8 size 0x224 virtual false final false
static inline bool CanConvertPrimitive(::System::RuntimeType*  source, ::System::RuntimeType*  target) ;

/// @brief Method CanConvertPrimitiveObjectToType addr 0x25de6c8 size 0x110 virtual false final false
static inline bool CanConvertPrimitiveObjectToType(::System::Object*  source, ::System::RuntimeType*  type) ;

/// @brief Method CompareMethodSig addr 0x25e112c size 0x15c virtual false final false
static inline bool CompareMethodSig(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2) ;

/// @brief Method SelectMethod addr 0x25e1288 size 0x724 virtual true final true
inline ::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*,::Array<::System::Reflection::MethodBase*>*>  match, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method CanChangePrimitive addr 0x25e19ac size 0x64 virtual false final false
static inline bool CanChangePrimitive(::System::Type*  source, ::System::Type*  target) ;

/// @brief Method CanPrimitiveWiden addr 0x25e1a10 size 0xd8 virtual false final false
static inline bool CanPrimitiveWiden(::System::Type*  source, ::System::Type*  target) ;

static inline ::System::DefaultBinder* New_ctor() ;

/// @brief Method .ctor addr 0x25e1ae8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultBinder(DefaultBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultBinder(DefaultBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultBinder()  = default;
public:


// Fields

// Static field _primitiveConversions


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DefaultBinder, 0x10>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder__Primitives, "System", "DefaultBinder/Primitives");
NEED_NO_BOX(::System::DefaultBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::DefaultBinder*, "System", "DefaultBinder");
NEED_NO_BOX(::System::__DefaultBinder__BinderState);
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder__BinderState*, "System", "DefaultBinder/BinderState");
NEED_NO_BOX(::System::__DefaultBinder____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__DefaultBinder____c*, "System", "DefaultBinder/<>c");
