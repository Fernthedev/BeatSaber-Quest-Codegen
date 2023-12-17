#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs)
namespace Mono {
struct __RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
namespace Mono {
struct __RuntimeStructs__MonoClass;
}
// Forward declare root types
namespace Mono {
class RuntimeStructs;
}
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
namespace Mono {
struct __RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct __RuntimeStructs__MonoClass;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
// Write type traits
MARK_REF_PTR_T(::Mono::RuntimeStructs);
MARK_VAL_T(::Mono::__RuntimeStructs__GPtrArray);
MARK_VAL_T(::Mono::__RuntimeStructs__GenericParamInfo);
MARK_VAL_T(::Mono::__RuntimeStructs__MonoClass);
MARK_VAL_T(::Mono::__RuntimeStructs__RemoteClass);
// Type: ::RemoteClass
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2235))
// CS Name: ::RuntimeStructs::RemoteClass
struct CORDL_TYPE __RuntimeStructs__RemoteClass : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field default_vtable offset 0x0
 __declspec(property(get=__get_default_vtable, put=__set_default_vtable)) ::cordl_internals::intptr_t  default_vtable;

/// @brief Field xdomain_vtable offset 0x8
 __declspec(property(get=__get_xdomain_vtable, put=__set_xdomain_vtable)) ::cordl_internals::intptr_t  xdomain_vtable;

/// @brief Field proxy_class offset 0x10
 __declspec(property(get=__get_proxy_class, put=__set_proxy_class)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  proxy_class;

/// @brief Field proxy_class_name offset 0x18
 __declspec(property(get=__get_proxy_class_name, put=__set_proxy_class_name)) ::cordl_internals::intptr_t  proxy_class_name;

/// @brief Field interface_count offset 0x20
 __declspec(property(get=__get_interface_count, put=__set_interface_count)) uint32_t  interface_count;

constexpr void __set_default_vtable(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_default_vtable() ;

constexpr ::cordl_internals::intptr_t const& __get_default_vtable() const;

constexpr void __set_xdomain_vtable(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_xdomain_vtable() ;

constexpr ::cordl_internals::intptr_t const& __get_xdomain_vtable() const;

constexpr void __set_proxy_class(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>& __get_proxy_class() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> const& __get_proxy_class() const;

constexpr void __set_proxy_class_name(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_proxy_class_name() ;

constexpr ::cordl_internals::intptr_t const& __get_proxy_class_name() const;

constexpr void __set_interface_count(uint32_t  value) ;

constexpr uint32_t& __get_interface_count() ;

constexpr uint32_t const& __get_interface_count() const;

// Ctor Parameters [CppParam { name: "default_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "xdomain_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "proxy_class", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }, CppParam { name: "proxy_class_name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __RuntimeStructs__RemoteClass(::cordl_internals::intptr_t  default_vtable, ::cordl_internals::intptr_t  xdomain_vtable, ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  proxy_class, ::cordl_internals::intptr_t  proxy_class_name, uint32_t  interface_count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RuntimeStructs__RemoteClass(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RuntimeStructs__RemoteClass()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__RemoteClass, 0x28>, "Size mismatch!");

} // namespace end def Mono
// Type: ::MonoClass
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2236))
// CS Name: ::RuntimeStructs::MonoClass
struct CORDL_TYPE __RuntimeStructs__MonoClass : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RuntimeStructs__MonoClass(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RuntimeStructs__MonoClass()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__MonoClass, 0x1>, "Size mismatch!");

} // namespace end def Mono
// Type: ::GenericParamInfo
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2237))
// CS Name: ::RuntimeStructs::GenericParamInfo
struct CORDL_TYPE __RuntimeStructs__GenericParamInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pklass offset 0x0
 __declspec(property(get=__get_pklass, put=__set_pklass)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  pklass;

/// @brief Field name offset 0x8
 __declspec(property(get=__get_name, put=__set_name)) ::cordl_internals::intptr_t  name;

/// @brief Field flags offset 0x10
 __declspec(property(get=__get_flags, put=__set_flags)) uint16_t  flags;

/// @brief Field token offset 0x14
 __declspec(property(get=__get_token, put=__set_token)) uint32_t  token;

/// @brief Field constraints offset 0x18
 __declspec(property(get=__get_constraints, put=__set_constraints)) ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>  constraints;

constexpr void __set_pklass(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>& __get_pklass() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> const& __get_pklass() const;

constexpr void __set_name(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_name() ;

constexpr ::cordl_internals::intptr_t const& __get_name() const;

constexpr void __set_flags(uint16_t  value) ;

constexpr uint16_t& __get_flags() ;

constexpr uint16_t const& __get_flags() const;

constexpr void __set_token(uint32_t  value) ;

constexpr uint32_t& __get_token() ;

constexpr uint32_t const& __get_token() const;

constexpr void __set_constraints(::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>  value) ;

constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>& __get_constraints() ;

constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>> const& __get_constraints() const;

// Ctor Parameters [CppParam { name: "pklass", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "constraints", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>", modifiers: "", def_value: None }]
constexpr __RuntimeStructs__GenericParamInfo(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  pklass, ::cordl_internals::intptr_t  name, uint16_t  flags, uint32_t  token, ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>  constraints) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RuntimeStructs__GenericParamInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RuntimeStructs__GenericParamInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__GenericParamInfo, 0x20>, "Size mismatch!");

} // namespace end def Mono
// Type: ::GPtrArray
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2238))
// CS Name: ::RuntimeStructs::GPtrArray
struct CORDL_TYPE __RuntimeStructs__GPtrArray : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field data offset 0x0
 __declspec(property(get=__get_data, put=__set_data)) ::cordl_internals::Ptr<::cordl_internals::intptr_t>  data;

/// @brief Field len offset 0x8
 __declspec(property(get=__get_len, put=__set_len)) int32_t  len;

constexpr void __set_data(::cordl_internals::Ptr<::cordl_internals::intptr_t>  value) ;

constexpr ::cordl_internals::Ptr<::cordl_internals::intptr_t>& __get_data() ;

constexpr ::cordl_internals::Ptr<::cordl_internals::intptr_t> const& __get_data() const;

constexpr void __set_len(int32_t  value) ;

constexpr int32_t& __get_len() ;

constexpr int32_t const& __get_len() const;

// Ctor Parameters [CppParam { name: "data", ty: "::cordl_internals::Ptr<::cordl_internals::intptr_t>", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __RuntimeStructs__GPtrArray(::cordl_internals::Ptr<::cordl_internals::intptr_t>  data, int32_t  len) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RuntimeStructs__GPtrArray(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RuntimeStructs__GPtrArray()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__RuntimeStructs__GPtrArray, 0x10>, "Size mismatch!");

} // namespace end def Mono
// Type: Mono::RuntimeStructs
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2239))
// CS Name: ::Mono::RuntimeStructs*
class CORDL_TYPE RuntimeStructs : public ::System::Object {
public:
// Declarations
using GPtrArray = ::Mono::__RuntimeStructs__GPtrArray;

using GenericParamInfo = ::Mono::__RuntimeStructs__GenericParamInfo;

using MonoClass = ::Mono::__RuntimeStructs__MonoClass;

using RemoteClass = ::Mono::__RuntimeStructs__RemoteClass;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeStructs(RuntimeStructs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeStructs(RuntimeStructs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeStructs()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeStructs, 0x10>, "Size mismatch!");

} // namespace end def Mono
NEED_NO_BOX(::Mono::RuntimeStructs);
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs*, "Mono", "RuntimeStructs");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__MonoClass, "Mono", "RuntimeStructs/MonoClass");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__RuntimeStructs__RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
