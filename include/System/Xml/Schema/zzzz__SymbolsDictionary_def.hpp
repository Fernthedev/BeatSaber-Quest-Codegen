#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymbolsDictionary)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SymbolsDictionary);
// Type: System.Xml.Schema::SymbolsDictionary
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11596))
// CS Name: ::System.Xml.Schema::SymbolsDictionary*
class CORDL_TYPE SymbolsDictionary : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field last offset 0x10
 __declspec(property(get=__get_last, put=__set_last)) int32_t  last;

/// @brief Field names offset 0x18
 __declspec(property(get=__get_names, put=__set_names)) ::System::Collections::Hashtable*  names;

/// @brief Field wildcards offset 0x20
 __declspec(property(get=__get_wildcards, put=__set_wildcards)) ::System::Collections::Hashtable*  wildcards;

/// @brief Field particles offset 0x28
 __declspec(property(get=__get_particles, put=__set_particles)) ::System::Collections::ArrayList*  particles;

/// @brief Field particleLast offset 0x30
 __declspec(property(get=__get_particleLast, put=__set_particleLast)) ::System::Object*  particleLast;

/// @brief Field isUpaEnforced offset 0x38
 __declspec(property(get=__get_isUpaEnforced, put=__set_isUpaEnforced)) bool  isUpaEnforced;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsUpaEnforced, put=set_IsUpaEnforced)) bool  IsUpaEnforced;

constexpr void __set_last(int32_t  value) ;

constexpr int32_t& __get_last() ;

constexpr int32_t const& __get_last() const;

constexpr void __set_names(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_names() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_names() const;

constexpr void __set_wildcards(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_wildcards() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_wildcards() const;

constexpr void __set_particles(::System::Collections::ArrayList*  value) ;

constexpr ::System::Collections::ArrayList* __get_particles() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> __get_particles() const;

constexpr void __set_particleLast(::System::Object*  value) ;

constexpr ::System::Object* __get_particleLast() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_particleLast() const;

constexpr void __set_isUpaEnforced(bool  value) ;

constexpr bool& __get_isUpaEnforced() ;

constexpr bool const& __get_isUpaEnforced() const;

static inline ::System::Xml::Schema::SymbolsDictionary* New_ctor() ;

/// @brief Method .ctor addr 0x28acb20 size 0xa4 virtual false final false
inline void _ctor() ;

/// @brief Method get_Count addr 0x28acbc4 size 0xc virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_IsUpaEnforced addr 0x28acbd0 size 0x8 virtual false final false
inline bool get_IsUpaEnforced() ;

/// @brief Method set_IsUpaEnforced addr 0x28acbd8 size 0xc virtual false final false
inline void set_IsUpaEnforced(bool  value) ;

/// @brief Method AddName addr 0x28acbe4 size 0x134 virtual false final false
inline int32_t AddName(::System::Xml::XmlQualifiedName*  name, ::System::Object*  particle) ;

/// @brief Method AddNamespaceList addr 0x28acd18 size 0x39c virtual false final false
inline void AddNamespaceList(::System::Xml::Schema::NamespaceList*  list, ::System::Object*  particle, bool  allowLocal) ;

/// @brief Method AddWildcard addr 0x28ad0b4 size 0x168 virtual false final false
inline void AddWildcard(::StringW  wildcard, ::System::Object*  particle) ;

/// @brief Method GetNamespaceListSymbols addr 0x28ad21c size 0x78c virtual false final false
inline ::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList*  list) ;

/// @brief Method Exists addr 0x28ad9a8 size 0x30 virtual false final false
inline bool Exists(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method GetParticle addr 0x28ad9d8 size 0x3c virtual false final false
inline ::System::Object* GetParticle(int32_t  symbol) ;

// Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SymbolsDictionary(SymbolsDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SymbolsDictionary(SymbolsDictionary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SymbolsDictionary()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SymbolsDictionary, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SymbolsDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SymbolsDictionary*, "System.Xml.Schema", "SymbolsDictionary");
