#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceList)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
struct __NamespaceList__ListType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __NamespaceList__ListType;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__NamespaceList__ListType);
MARK_REF_PTR_T(::System::Xml::Schema::NamespaceList);
// Type: ::ListType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11698))
// CS Name: ::NamespaceList::ListType
struct CORDL_TYPE __NamespaceList__ListType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NamespaceList__ListType_Unwrapped
enum struct ____NamespaceList__ListType_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_Other = static_cast<int32_t>(0x1),
__E_Set = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Any value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::__NamespaceList__ListType const Any;

/// @brief Field Other value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::__NamespaceList__ListType const Other;

/// @brief Field Set value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::__NamespaceList__ListType const Set;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NamespaceList__ListType_Unwrapped () const noexcept {
return std::bit_cast<____NamespaceList__ListType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NamespaceList__ListType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NamespaceList__ListType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NamespaceList__ListType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__NamespaceList__ListType, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::NamespaceList
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11699))
// CS Name: ::System.Xml.Schema::NamespaceList*
class CORDL_TYPE NamespaceList : public ::System::Object {
public:
// Declarations
using ListType = ::System::Xml::Schema::__NamespaceList__ListType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Xml::Schema::__NamespaceList__ListType  type;

/// @brief Field set offset 0x18
 __declspec(property(get=__get_set, put=__set_set)) ::System::Collections::Hashtable*  set;

/// @brief Field targetNamespace offset 0x20
 __declspec(property(get=__get_targetNamespace, put=__set_targetNamespace)) ::StringW  targetNamespace;

 __declspec(property(get=get_Type)) ::System::Xml::Schema::__NamespaceList__ListType  Type;

 __declspec(property(get=get_Excluded)) ::StringW  Excluded;

 __declspec(property(get=get_Enumerate)) ::System::Collections::ICollection*  Enumerate;

constexpr void __set_type(::System::Xml::Schema::__NamespaceList__ListType  value) ;

constexpr ::System::Xml::Schema::__NamespaceList__ListType& __get_type() ;

constexpr ::System::Xml::Schema::__NamespaceList__ListType const& __get_type() const;

constexpr void __set_set(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_set() const;

constexpr void __set_targetNamespace(::StringW  value) ;

constexpr ::StringW& __get_targetNamespace() ;

constexpr ::StringW const& __get_targetNamespace() const;

static inline ::System::Xml::Schema::NamespaceList* New_ctor() ;

/// @brief Method .ctor addr 0x28c3ac8 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Xml::Schema::NamespaceList* New_ctor(::StringW  namespaces, ::StringW  targetNamespace) ;

/// @brief Method .ctor addr 0x28c3ad0 size 0x2a0 virtual false final false
inline void _ctor(::StringW  namespaces, ::StringW  targetNamespace) ;

/// @brief Method get_Type addr 0x28c3d70 size 0x8 virtual false final false
inline ::System::Xml::Schema::__NamespaceList__ListType get_Type() ;

/// @brief Method get_Excluded addr 0x28c3d78 size 0x8 virtual false final false
inline ::StringW get_Excluded() ;

/// @brief Method get_Enumerate addr 0x28c3d80 size 0x6c virtual false final false
inline ::System::Collections::ICollection* get_Enumerate() ;

/// @brief Method Allows addr 0x28c3dec size 0x84 virtual true final false
inline bool Allows(::StringW  ns) ;

/// @brief Method Allows addr 0x28c3e70 size 0x20 virtual false final false
inline bool Allows(::System::Xml::XmlQualifiedName*  qname) ;

/// @brief Method ToString addr 0x28c3e90 size 0x4c8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamespaceList(NamespaceList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamespaceList(NamespaceList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NamespaceList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NamespaceList, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__NamespaceList__ListType, "System.Xml.Schema", "NamespaceList/ListType");
NEED_NO_BOX(::System::Xml::Schema::NamespaceList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceList*, "System.Xml.Schema", "NamespaceList");
