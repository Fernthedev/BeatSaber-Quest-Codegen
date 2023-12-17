#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XName)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Xml::Linq {
class XName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XName);
// Type: System.Xml.Linq::XName
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15451))
// CS Name: ::System.Xml.Linq::XName*
class CORDL_TYPE XName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _ns offset 0x10
 __declspec(property(get=__get__ns, put=__set__ns)) ::System::Xml::Linq::XNamespace*  _ns;

/// @brief Field _localName offset 0x18
 __declspec(property(get=__get__localName, put=__set__localName)) ::StringW  _localName;

/// @brief Field _hashCode offset 0x20
 __declspec(property(get=__get__hashCode, put=__set__hashCode)) int32_t  _hashCode;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Namespace)) ::System::Xml::Linq::XNamespace*  Namespace;

 __declspec(property(get=get_NamespaceName)) ::StringW  NamespaceName;

/// @brief Convert operator to "::System::IEquatable_1<::System::Xml::Linq::XName*>"
constexpr operator  ::System::IEquatable_1<::System::Xml::Linq::XName*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set__ns(::System::Xml::Linq::XNamespace*  value) ;

constexpr ::System::Xml::Linq::XNamespace* __get__ns() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNamespace*> __get__ns() const;

constexpr void __set__localName(::StringW  value) ;

constexpr ::StringW& __get__localName() ;

constexpr ::StringW const& __get__localName() const;

constexpr void __set__hashCode(int32_t  value) ;

constexpr int32_t& __get__hashCode() ;

constexpr int32_t const& __get__hashCode() const;

static inline ::System::Xml::Linq::XName* New_ctor(::System::Xml::Linq::XNamespace*  ns, ::StringW  localName) ;

/// @brief Method .ctor addr 0x2860044 size 0xb8 virtual false final false
inline void _ctor(::System::Xml::Linq::XNamespace*  ns, ::StringW  localName) ;

/// @brief Method get_LocalName addr 0x28600fc size 0x8 virtual false final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Namespace addr 0x2860104 size 0x8 virtual false final false
inline ::System::Xml::Linq::XNamespace* get_Namespace() ;

/// @brief Method get_NamespaceName addr 0x285b200 size 0x1c virtual false final false
inline ::StringW get_NamespaceName() ;

/// @brief Method ToString addr 0x286010c size 0x90 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Get addr 0x286019c size 0x154 virtual false final false
static inline ::System::Xml::Linq::XName* Get(::StringW  expandedName) ;

/// @brief Method Get addr 0x28607b0 size 0x24 virtual false final false
static inline ::System::Xml::Linq::XName* Get(::StringW  localName, ::StringW  namespaceName) ;

/// @brief Method op_Implicit addr 0x28607d4 size 0xc virtual false final false
static inline ::System::Xml::Linq::XName* op_Implicit___System__Xml__Linq__XName_(::StringW  expandedName) ;

/// @brief Method Equals addr 0x28607e0 size 0xc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x28607ec size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x285aaac size 0xc virtual false final false
static inline bool op_Equality(::System::Xml::Linq::XName*  left, ::System::Xml::Linq::XName*  right) ;

/// @brief Method System.IEquatable<System.Xml.Linq.XName>.Equals addr 0x28607f4 size 0xc virtual true final true
inline bool System_IEquatable_System_Xml_Linq_XName__Equals(::System::Xml::Linq::XName*  other) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2860800 size 0x40 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Xml::Linq::XName* New_ctor() ;

/// @brief Method .ctor addr 0x2860840 size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XName(XName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XName(XName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XName()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XName, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XName*, "System.Xml.Linq", "XName");
