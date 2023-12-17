#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePropertyInfo)
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
template<typename T,typename R>
class __RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct PInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class RuntimeType;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct MonoPropertyInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace Mono {
struct RuntimePropertyHandle;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class __RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
template<typename R>
class __RuntimePropertyInfo__StaticGetter_1;
}
// Forward declare root types
namespace System::Reflection {
template<typename T,typename R>
class __RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
template<typename R>
class __RuntimePropertyInfo__StaticGetter_1;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
class __RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type R>
class __RuntimePropertyInfo__Getter_2<T,R>;
}
namespace System::Reflection {
template<::il2cpp_utils::il2cpp_reference_type R>
class __RuntimePropertyInfo__StaticGetter_1<R>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__Getter_2);
MARK_GEN_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1);
MARK_REF_PTR_T(::System::Reflection::RuntimePropertyInfo);
MARK_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__GetterAdapter);
// Type: ::GetterAdapter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3529))
// CS Name: ::RuntimePropertyInfo::GetterAdapter*
class CORDL_TYPE __RuntimePropertyInfo__GetterAdapter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x24f944c size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x24f9578 size 0x14 virtual true final false
inline ::System::Object* Invoke(::System::Object*  _this) ;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RuntimePropertyInfo__GetterAdapter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__RuntimePropertyInfo__GetterAdapter, 0x80>, "Size mismatch!");

} // namespace end def System::Reflection
// Type: ::Getter`2
// Type: ::StaticGetter`1
// Type: System.Reflection::RuntimePropertyInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3488))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3532))
// CS Name: ::System.Reflection::RuntimePropertyInfo*
class CORDL_TYPE RuntimePropertyInfo : public ::System::Reflection::PropertyInfo {
public:
// Declarations
template<typename R>
using StaticGetter_1 = ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>;

template<typename T,typename R>
using Getter_2 = ::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>;

using GetterAdapter = ::System::Reflection::__RuntimePropertyInfo__GetterAdapter;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Reflection::PropertyInfo)]{};

/// @brief Field klass offset 0x10
 __declspec(property(get=__get_klass, put=__set_klass)) ::cordl_internals::intptr_t  klass;

/// @brief Field prop offset 0x18
 __declspec(property(get=__get_prop, put=__set_prop)) ::cordl_internals::intptr_t  prop;

/// @brief Field info offset 0x20
 __declspec(property(get=__get_info, put=__set_info)) ::System::Reflection::MonoPropertyInfo  info;

/// @brief Field cached offset 0x50
 __declspec(property(get=__get_cached, put=__set_cached)) ::System::Reflection::PInfo  cached;

/// @brief Field cached_getter offset 0x58
 __declspec(property(get=__get_cached_getter, put=__set_cached_getter)) ::System::Reflection::__RuntimePropertyInfo__GetterAdapter*  cached_getter;

 __declspec(property(get=get_BindingFlags)) ::System::Reflection::BindingFlags  BindingFlags;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_ReflectedTypeInternal)) ::System::RuntimeType*  ReflectedTypeInternal;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_ReflectedType)) ::System::Type*  ReflectedType;

 __declspec(property(get=get_DeclaringType)) ::System::Type*  DeclaringType;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set_klass(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_klass() ;

constexpr ::cordl_internals::intptr_t const& __get_klass() const;

constexpr void __set_prop(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_prop() ;

constexpr ::cordl_internals::intptr_t const& __get_prop() const;

constexpr void __set_info(::System::Reflection::MonoPropertyInfo  value) ;

constexpr ::System::Reflection::MonoPropertyInfo& __get_info() ;

constexpr ::System::Reflection::MonoPropertyInfo const& __get_info() const;

constexpr void __set_cached(::System::Reflection::PInfo  value) ;

constexpr ::System::Reflection::PInfo& __get_cached() ;

constexpr ::System::Reflection::PInfo const& __get_cached() const;

constexpr void __set_cached_getter(::System::Reflection::__RuntimePropertyInfo__GetterAdapter*  value) ;

constexpr ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* __get_cached_getter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__RuntimePropertyInfo__GetterAdapter*> __get_cached_getter() const;

/// @brief Method get_property_info addr 0x24f8578 size 0x4 virtual false final false
static inline void get_property_info(::System::Reflection::RuntimePropertyInfo*  prop, ByRef<::System::Reflection::MonoPropertyInfo>  info, ::System::Reflection::PInfo  req_info) ;

/// @brief Method get_BindingFlags addr 0x24f857c size 0x8 virtual false final false
inline ::System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x24f8584 size 0x4 virtual true final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method GetDeclaringTypeInternal addr 0x24f85a4 size 0x84 virtual false final false
inline ::System::RuntimeType* GetDeclaringTypeInternal() ;

/// @brief Method get_ReflectedTypeInternal addr 0x24f8628 size 0x84 virtual false final false
inline ::System::RuntimeType* get_ReflectedTypeInternal() ;

/// @brief Method GetRuntimeModule addr 0x24f8588 size 0x1c virtual false final false
inline ::System::Reflection::RuntimeModule* GetRuntimeModule() ;

/// @brief Method ToString addr 0x24f86ac size 0x8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method FormatNameAndSig addr 0x24f86b4 size 0x170 virtual false final false
inline ::StringW FormatNameAndSig(bool  serialization) ;

/// @brief Method GetObjectData addr 0x24f8824 size 0xd0 virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method SerializationToString addr 0x24f88f4 size 0x8 virtual false final false
inline ::StringW SerializationToString() ;

/// @brief Method CachePropertyInfo addr 0x24f88fc size 0x40 virtual false final false
inline void CachePropertyInfo(::System::Reflection::PInfo  flags) ;

/// @brief Method get_CanRead addr 0x24f893c size 0x40 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x24f897c size 0x40 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_PropertyType addr 0x24f89bc size 0xb0 virtual true final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_ReflectedType addr 0x24f8a6c size 0x38 virtual true final false
inline ::System::Type* get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x24f8aa4 size 0x38 virtual true final false
inline ::System::Type* get_DeclaringType() ;

/// @brief Method get_Name addr 0x24f8adc size 0x38 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method GetGetMethod addr 0x24f8b14 size 0x84 virtual true final false
inline ::System::Reflection::MethodInfo* GetGetMethod(bool  nonPublic) ;

/// @brief Method GetIndexParameters addr 0x24f8b98 size 0x1c4 virtual true final false
inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters() ;

/// @brief Method GetSetMethod addr 0x24f8d5c size 0x84 virtual true final false
inline ::System::Reflection::MethodInfo* GetSetMethod(bool  nonPublic) ;

/// @brief Method IsDefined addr 0x24f8de0 size 0x6c virtual true final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f8e4c size 0x5c virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f8ea8 size 0x6c virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetterAdapterFrame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename R>
static inline ::System::Object* GetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__Getter_2<T,R>*  getter, ::System::Object*  obj) ;

/// @brief Method StaticGetterAdapterFrame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename R>
static inline ::System::Object* StaticGetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>*  getter, ::System::Object*  obj) ;

/// @brief Method GetValue addr 0x24f8f14 size 0x20 virtual true final false
inline ::System::Object* GetValue(::System::Object*  obj, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  index) ;

/// @brief Method GetValue addr 0x24f8f34 size 0x204 virtual true final false
inline ::System::Object* GetValue(::System::Object*  obj, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  index, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method SetValue addr 0x24f9138 size 0x204 virtual true final false
inline void SetValue(::System::Object*  obj, ::System::Object*  value, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  index, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method get_MetadataToken addr 0x24f933c size 0x4 virtual true final false
inline int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x24f9340 size 0x4 virtual false final false
static inline int32_t get_metadata_token(::System::Reflection::RuntimePropertyInfo*  monoProperty) ;

/// @brief Method internal_from_handle_type addr 0x24f9344 size 0x4 virtual false final false
static inline ::System::Reflection::PropertyInfo* internal_from_handle_type(::cordl_internals::intptr_t  event_handle, ::cordl_internals::intptr_t  type_handle) ;

/// @brief Method GetPropertyFromHandle addr 0x24f9348 size 0xfc virtual false final false
static inline ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle  handle, ::System::RuntimeTypeHandle  reflectedType) ;

static inline ::System::Reflection::RuntimePropertyInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24f9444 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimePropertyInfo(RuntimePropertyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimePropertyInfo(RuntimePropertyInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimePropertyInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimePropertyInfo, 0x60>, "Size mismatch!");

} // namespace end def System::Reflection
// Type: ::Getter`2
namespace System::Reflection {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type R>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3530)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3530), inst: 81 })
// CS Name: ::RuntimePropertyInfo::Getter`2<T,R>*
class CORDL_TYPE __RuntimePropertyInfo__Getter_2<T,R> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Reflection::__RuntimePropertyInfo__Getter_2<T,R>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline R Invoke(T  _this) ;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RuntimePropertyInfo__Getter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: ::StaticGetter`1
namespace System::Reflection {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type R>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3531))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3531), inst: 2 })
// CS Name: ::RuntimePropertyInfo::StaticGetter`1<R>*
class CORDL_TYPE __RuntimePropertyInfo__StaticGetter_1<R> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline R Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RuntimePropertyInfo__StaticGetter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::__RuntimePropertyInfo__Getter_2, "System.Reflection", "RuntimePropertyInfo/Getter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1, "System.Reflection", "RuntimePropertyInfo/StaticGetter`1");
NEED_NO_BOX(::System::Reflection::RuntimePropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
NEED_NO_BOX(::System::Reflection::__RuntimePropertyInfo__GetterAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__RuntimePropertyInfo__GetterAdapter*, "System.Reflection", "RuntimePropertyInfo/GetterAdapter");
