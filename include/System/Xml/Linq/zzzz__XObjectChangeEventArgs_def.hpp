#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(XObjectChangeEventArgs)
namespace System::Xml::Linq {
struct XObjectChange;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObjectChangeEventArgs);
// Type: System.Xml.Linq::XObjectChangeEventArgs
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15456))
// CS Name: ::System.Xml.Linq::XObjectChangeEventArgs*
class CORDL_TYPE XObjectChangeEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::EventArgs)]{};

/// @brief Field _objectChange offset 0x10
 __declspec(property(get=__get__objectChange, put=__set__objectChange)) ::System::Xml::Linq::XObjectChange  _objectChange;

constexpr void __set__objectChange(::System::Xml::Linq::XObjectChange  value) ;

constexpr ::System::Xml::Linq::XObjectChange& __get__objectChange() ;

constexpr ::System::Xml::Linq::XObjectChange const& __get__objectChange() const;

static inline void setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs*  value) ;

static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Add() ;

static inline void setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs*  value) ;

static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Remove() ;

static inline void setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs*  value) ;

static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Name() ;

static inline void setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs*  value) ;

static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Value() ;

static inline ::System::Xml::Linq::XObjectChangeEventArgs* New_ctor(::System::Xml::Linq::XObjectChange  objectChange) ;

/// @brief Method .ctor addr 0x2861374 size 0x6c virtual false final false
inline void _ctor(::System::Xml::Linq::XObjectChange  objectChange) ;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XObjectChangeEventArgs(XObjectChangeEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XObjectChangeEventArgs(XObjectChangeEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XObjectChangeEventArgs()  = default;
public:


// Fields

// Static field Add

// Static field Remove

// Static field Name

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChangeEventArgs, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeEventArgs*, "System.Xml.Linq", "XObjectChangeEventArgs");
