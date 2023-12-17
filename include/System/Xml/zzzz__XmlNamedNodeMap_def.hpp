#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamedNodeMap)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Xml {
struct __XmlNamedNodeMap__SmallXmlNodeList;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
class __XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
class __XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
struct __XmlNamedNodeMap__SmallXmlNodeList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator);
MARK_REF_PTR_T(::System::Xml::XmlNamedNodeMap);
MARK_VAL_T(::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList);
// Type: ::SingleObjectEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11517))
// CS Name: ::XmlNamedNodeMap::SmallXmlNodeList::SingleObjectEnumerator*
class CORDL_TYPE __XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field loneValue offset 0x10
 __declspec(property(get=__get_loneValue, put=__set_loneValue)) ::System::Object*  loneValue;

/// @brief Field position offset 0x18
 __declspec(property(get=__get_position, put=__set_position)) int32_t  position;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set_loneValue(::System::Object*  value) ;

constexpr ::System::Object* __get_loneValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_loneValue() const;

constexpr void __set_position(int32_t  value) ;

constexpr int32_t& __get_position() ;

constexpr int32_t const& __get_position() const;

static inline ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator* New_ctor(::System::Object*  value) ;

/// @brief Method .ctor addr 0x288fbcc size 0x30 virtual false final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method get_Current addr 0x288fbfc size 0x54 virtual true final true
inline ::System::Object* get_Current() ;

/// @brief Method MoveNext addr 0x288fc50 size 0x1c virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x288fc6c size 0xc virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator(__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SmallXmlNodeList
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11518))
// CS Name: ::XmlNamedNodeMap::SmallXmlNodeList
struct CORDL_TYPE __XmlNamedNodeMap__SmallXmlNodeList : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using SingleObjectEnumerator = ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field field offset 0x0
 __declspec(property(get=__get_field, put=__set_field)) ::System::Object*  field;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Object*  Item[];

constexpr void __set_field(::System::Object*  value) ;

constexpr ::System::Object* __get_field() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_field() const;

/// @brief Method get_Count addr 0x288f174 size 0xa4 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x288ee58 size 0xe0 virtual false final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method Add addr 0x288f498 size 0x11c virtual false final false
inline void Add(::System::Object*  value) ;

/// @brief Method RemoveAt addr 0x288f7c4 size 0xe4 virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method Insert addr 0x288fa28 size 0x1a4 virtual false final false
inline void Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method GetEnumerator addr 0x288f220 size 0x100 virtual false final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

// Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr __XmlNamedNodeMap__SmallXmlNodeList(::System::Object*  field) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XmlNamedNodeMap__SmallXmlNodeList(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XmlNamedNodeMap__SmallXmlNodeList()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList, 0x8>, "Size mismatch!");

} // namespace end def System::Xml
// Type: System.Xml::XmlNamedNodeMap
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11519))
// CS Name: ::System.Xml::XmlNamedNodeMap*
class CORDL_TYPE XmlNamedNodeMap : public ::System::Object {
public:
// Declarations
using SmallXmlNodeList = ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field parent offset 0x10
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Xml::XmlNode*  parent;

/// @brief Field nodes offset 0x18
 __declspec(property(get=__get_nodes, put=__set_nodes)) ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList  nodes;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_parent(::System::Xml::XmlNode*  value) ;

constexpr ::System::Xml::XmlNode* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> __get_parent() const;

constexpr void __set_nodes(::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList  value) ;

constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList& __get_nodes() ;

constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList const& __get_nodes() const;

static inline ::System::Xml::XmlNamedNodeMap* New_ctor(::System::Xml::XmlNode*  parent) ;

/// @brief Method .ctor addr 0x2888154 size 0x28 virtual false final false
inline void _ctor(::System::Xml::XmlNode*  parent) ;

/// @brief Method GetNamedItem addr 0x288ecdc size 0x98 virtual true final false
inline ::System::Xml::XmlNode* GetNamedItem(::StringW  name) ;

/// @brief Method SetNamedItem addr 0x288ef38 size 0xbc virtual true final false
inline ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode*  node) ;

/// @brief Method get_Count addr 0x288f16c size 0x8 virtual true final false
inline int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x288f218 size 0x8 virtual true final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method FindNodeOffset addr 0x288ed74 size 0xe4 virtual false final false
inline int32_t FindNodeOffset(::StringW  name) ;

/// @brief Method FindNodeOffset addr 0x288eff4 size 0x124 virtual false final false
inline int32_t FindNodeOffset(::StringW  localName, ::StringW  namespaceURI) ;

/// @brief Method AddNode addr 0x288f320 size 0x178 virtual true final false
inline ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode*  node) ;

/// @brief Method AddNodeForLoad addr 0x288f5b4 size 0xa8 virtual true final false
inline ::System::Xml::XmlNode* AddNodeForLoad(::System::Xml::XmlNode*  node, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method RemoveNodeAt addr 0x288f65c size 0x168 virtual true final false
inline ::System::Xml::XmlNode* RemoveNodeAt(int32_t  i) ;

/// @brief Method ReplaceNodeAt addr 0x288f118 size 0x54 virtual false final false
inline ::System::Xml::XmlNode* ReplaceNodeAt(int32_t  i, ::System::Xml::XmlNode*  node) ;

/// @brief Method InsertNodeAt addr 0x288f8a8 size 0x180 virtual true final false
inline ::System::Xml::XmlNode* InsertNodeAt(int32_t  i, ::System::Xml::XmlNode*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNamedNodeMap(XmlNamedNodeMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNamedNodeMap(XmlNamedNodeMap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlNamedNodeMap()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNamedNodeMap, 0x20>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator");
NEED_NO_BOX(::System::Xml::XmlNamedNodeMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamedNodeMap*, "System.Xml", "XmlNamedNodeMap");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList");
