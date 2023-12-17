#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceResolver)
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class __NamespaceResolver__NamespaceDeclaration;
}
// Forward declare root types
namespace System::Xml::Linq {
class __NamespaceResolver__NamespaceDeclaration;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration);
MARK_VAL_T(::System::Xml::Linq::NamespaceResolver);
// Type: ::NamespaceDeclaration
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15447))
// CS Name: ::NamespaceResolver::NamespaceDeclaration*
class CORDL_TYPE __NamespaceResolver__NamespaceDeclaration : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field prefix offset 0x10
 __declspec(property(get=__get_prefix, put=__set_prefix)) ::StringW  prefix;

/// @brief Field ns offset 0x18
 __declspec(property(get=__get_ns, put=__set_ns)) ::System::Xml::Linq::XNamespace*  ns;

/// @brief Field scope offset 0x20
 __declspec(property(get=__get_scope, put=__set_scope)) int32_t  scope;

/// @brief Field prev offset 0x28
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  prev;

constexpr void __set_prefix(::StringW  value) ;

constexpr ::StringW& __get_prefix() ;

constexpr ::StringW const& __get_prefix() const;

constexpr void __set_ns(::System::Xml::Linq::XNamespace*  value) ;

constexpr ::System::Xml::Linq::XNamespace* __get_ns() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNamespace*> __get_ns() const;

constexpr void __set_scope(int32_t  value) ;

constexpr int32_t& __get_scope() ;

constexpr int32_t const& __get_scope() const;

constexpr void __set_prev(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  value) ;

constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> __get_prev() const;

static inline ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* New_ctor() ;

/// @brief Method .ctor addr 0x286003c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NamespaceResolver__NamespaceDeclaration()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, 0x30>, "Size mismatch!");

} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::NamespaceResolver
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15448))
// CS Name: ::System.Xml.Linq::NamespaceResolver
struct CORDL_TYPE NamespaceResolver : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using NamespaceDeclaration = ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _scope offset 0x0
 __declspec(property(get=__get__scope, put=__set__scope)) int32_t  _scope;

/// @brief Field _declaration offset 0x8
 __declspec(property(get=__get__declaration, put=__set__declaration)) ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _declaration;

/// @brief Field _rover offset 0x10
 __declspec(property(get=__get__rover, put=__set__rover)) ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _rover;

constexpr void __set__scope(int32_t  value) ;

constexpr int32_t& __get__scope() ;

constexpr int32_t const& __get__scope() const;

constexpr void __set__declaration(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  value) ;

constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* __get__declaration() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> __get__declaration() const;

constexpr void __set__rover(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  value) ;

constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* __get__rover() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> __get__rover() const;

/// @brief Method PushScope addr 0x285ff18 size 0x10 virtual false final false
inline void PushScope() ;

/// @brief Method PopScope addr 0x285ffc4 size 0x78 virtual false final false
inline void PopScope() ;

/// @brief Method Add addr 0x285ff28 size 0x9c virtual false final false
inline void Add(::StringW  prefix, ::System::Xml::Linq::XNamespace*  ns) ;

/// @brief Method AddFirst addr 0x285fdac size 0x98 virtual false final false
inline void AddFirst(::StringW  prefix, ::System::Xml::Linq::XNamespace*  ns) ;

/// @brief Method GetPrefixOfNamespace addr 0x285fc6c size 0xdc virtual false final false
inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace*  ns, bool  allowDefaultNamespace) ;

// Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_declaration", ty: "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }, CppParam { name: "_rover", ty: "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }]
constexpr NamespaceResolver(int32_t  _scope, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _declaration, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _rover) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NamespaceResolver(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NamespaceResolver()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::NamespaceResolver, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*, "System.Xml.Linq", "NamespaceResolver/NamespaceDeclaration");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceResolver, "System.Xml.Linq", "NamespaceResolver");
