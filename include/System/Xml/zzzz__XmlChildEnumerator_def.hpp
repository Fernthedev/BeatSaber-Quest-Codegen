#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlChildEnumerator)
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class XmlChildEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlChildEnumerator);
// Type: System.Xml::XmlChildEnumerator
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11501))
// CS Name: ::System.Xml::XmlChildEnumerator*
class CORDL_TYPE XmlChildEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field container offset 0x10
 __declspec(property(get=__get_container, put=__set_container)) ::System::Xml::XmlNode*  container;

/// @brief Field child offset 0x18
 __declspec(property(get=__get_child, put=__set_child)) ::System::Xml::XmlNode*  child;

/// @brief Field isFirst offset 0x20
 __declspec(property(get=__get_isFirst, put=__set_isFirst)) bool  isFirst;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_Current)) ::System::Xml::XmlNode*  Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set_container(::System::Xml::XmlNode*  value) ;

constexpr ::System::Xml::XmlNode* __get_container() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> __get_container() const;

constexpr void __set_child(::System::Xml::XmlNode*  value) ;

constexpr ::System::Xml::XmlNode* __get_child() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> __get_child() const;

constexpr void __set_isFirst(bool  value) ;

constexpr bool& __get_isFirst() ;

constexpr bool const& __get_isFirst() const;

static inline ::System::Xml::XmlChildEnumerator* New_ctor(::System::Xml::XmlNode*  container) ;

/// @brief Method .ctor addr 0x2883d70 size 0x50 virtual false final false
inline void _ctor(::System::Xml::XmlNode*  container) ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x2883dc0 size 0x4 virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method MoveNext addr 0x2883dc4 size 0x64 virtual false final false
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2883e28 size 0x38 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2883e60 size 0x4 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current addr 0x2883e64 size 0x7c virtual false final false
inline ::System::Xml::XmlNode* get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlChildEnumerator(XmlChildEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlChildEnumerator(XmlChildEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlChildEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlChildEnumerator, 0x28>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlChildEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildEnumerator*, "System.Xml", "XmlChildEnumerator");
