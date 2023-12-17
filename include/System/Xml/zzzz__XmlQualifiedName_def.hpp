#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlQualifiedName)
namespace System::Xml {
class __XmlQualifiedName__HashCodeOfStringDelegate;
}
namespace System {
class Object;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class __XmlQualifiedName__HashCodeOfStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlQualifiedName);
MARK_REF_PTR_T(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate);
// Type: ::HashCodeOfStringDelegate
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11572))
// CS Name: ::XmlQualifiedName::HashCodeOfStringDelegate*
class CORDL_TYPE __XmlQualifiedName__HashCodeOfStringDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x28a8f74 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x28a92b8 size 0x14 virtual true final false
inline int32_t Invoke(::StringW  s, int32_t  sLen, int64_t  additionalEntropy) ;

// Ctor Parameters [CppParam { name: "", ty: "__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XmlQualifiedName__HashCodeOfStringDelegate(__XmlQualifiedName__HashCodeOfStringDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XmlQualifiedName__HashCodeOfStringDelegate(__XmlQualifiedName__HashCodeOfStringDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XmlQualifiedName__HashCodeOfStringDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate, 0x80>, "Size mismatch!");

} // namespace end def System::Xml
// Type: System.Xml::XmlQualifiedName
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11573))
// CS Name: ::System.Xml::XmlQualifiedName*
class CORDL_TYPE XmlQualifiedName : public ::System::Object {
public:
// Declarations
using HashCodeOfStringDelegate = ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field ns offset 0x18
 __declspec(property(get=__get_ns, put=__set_ns)) ::StringW  ns;

/// @brief Field hash offset 0x20
 __declspec(property(get=__get_hash, put=__set_hash)) int32_t  hash;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

static inline void setStaticF_hashCodeDelegate(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate*  value) ;

static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* getStaticF_hashCodeDelegate() ;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_ns(::StringW  value) ;

constexpr ::StringW& __get_ns() ;

constexpr ::StringW const& __get_ns() const;

constexpr void __set_hash(int32_t  value) ;

constexpr int32_t& __get_hash() ;

constexpr int32_t const& __get_hash() const;

static inline void setStaticF_Empty(::System::Xml::XmlQualifiedName*  value) ;

static inline ::System::Xml::XmlQualifiedName* getStaticF_Empty() ;

static inline ::System::Xml::XmlQualifiedName* New_ctor() ;

/// @brief Method .ctor addr 0x28a8970 size 0x54 virtual false final false
inline void _ctor() ;

static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x28a8a50 size 0x60 virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW  name, ::StringW  ns) ;

/// @brief Method .ctor addr 0x28a89c4 size 0x8c virtual false final false
inline void _ctor(::StringW  name, ::StringW  ns) ;

/// @brief Method get_Namespace addr 0x28a8ab0 size 0x8 virtual false final false
inline ::StringW get_Namespace() ;

/// @brief Method get_Name addr 0x28a8ab8 size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method GetHashCode addr 0x28a8ac0 size 0xcc virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method get_IsEmpty addr 0x28a8d08 size 0x3c virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method ToString addr 0x28a8d44 size 0x70 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x28a8db4 size 0xe0 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method op_Equality addr 0x28a8f04 size 0x68 virtual false final false
static inline bool op_Equality(::System::Xml::XmlQualifiedName*  a, ::System::Xml::XmlQualifiedName*  b) ;

/// @brief Method op_Inequality addr 0x28a8e94 size 0x70 virtual false final false
static inline bool op_Inequality(::System::Xml::XmlQualifiedName*  a, ::System::Xml::XmlQualifiedName*  b) ;

/// @brief Method GetHashCodeDelegate addr 0x28a8b8c size 0x17c virtual false final false
static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* GetHashCodeDelegate() ;

/// @brief Method IsRandomizedHashingDisabled addr 0x28a8f6c size 0x8 virtual false final false
static inline bool IsRandomizedHashingDisabled() ;

/// @brief Method GetHashCodeOfString addr 0x28a904c size 0x1c virtual false final false
static inline int32_t GetHashCodeOfString(::StringW  s, int32_t  length, int64_t  additionalEntropy) ;

/// @brief Method Init addr 0x28a9068 size 0xc virtual false final false
inline void Init(::StringW  name, ::StringW  ns) ;

/// @brief Method Parse addr 0x28a9074 size 0x1b4 virtual false final false
static inline ::System::Xml::XmlQualifiedName* Parse(::StringW  s, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::StringW>  prefix) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlQualifiedName(XmlQualifiedName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlQualifiedName(XmlQualifiedName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlQualifiedName()  = default;
public:


// Fields

// Static field hashCodeDelegate

// Static field Empty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlQualifiedName, 0x28>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlQualifiedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlQualifiedName*, "System.Xml", "XmlQualifiedName");
NEED_NO_BOX(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate*, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
