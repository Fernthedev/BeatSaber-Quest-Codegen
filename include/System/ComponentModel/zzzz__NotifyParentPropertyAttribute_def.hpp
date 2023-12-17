#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyParentPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyParentPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NotifyParentPropertyAttribute);
// Type: System.ComponentModel::NotifyParentPropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9493))
// CS Name: ::System.ComponentModel::NotifyParentPropertyAttribute*
class CORDL_TYPE NotifyParentPropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field notifyParent offset 0x10
 __declspec(property(get=__get_notifyParent, put=__set_notifyParent)) bool  notifyParent;

 __declspec(property(get=get_NotifyParent)) bool  NotifyParent;

static inline void setStaticF_Yes(::System::ComponentModel::NotifyParentPropertyAttribute*  value) ;

static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Yes() ;

static inline void setStaticF_No(::System::ComponentModel::NotifyParentPropertyAttribute*  value) ;

static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_No() ;

static inline void setStaticF_Default(::System::ComponentModel::NotifyParentPropertyAttribute*  value) ;

static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Default() ;

constexpr void __set_notifyParent(bool  value) ;

constexpr bool& __get_notifyParent() ;

constexpr bool const& __get_notifyParent() const;

static inline ::System::ComponentModel::NotifyParentPropertyAttribute* New_ctor(bool  notifyParent) ;

/// @brief Method .ctor addr 0x293a6c8 size 0x28 virtual false final false
inline void _ctor(bool  notifyParent) ;

/// @brief Method get_NotifyParent addr 0x293a6f0 size 0x8 virtual false final false
inline bool get_NotifyParent() ;

/// @brief Method Equals addr 0x293a6f8 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x293a778 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x293a780 size 0x68 virtual true final false
inline bool IsDefaultAttribute() ;

// Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotifyParentPropertyAttribute(NotifyParentPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotifyParentPropertyAttribute(NotifyParentPropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotifyParentPropertyAttribute()  = default;
public:


// Fields

// Static field Yes

// Static field No

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyParentPropertyAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NotifyParentPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyParentPropertyAttribute*, "System.ComponentModel", "NotifyParentPropertyAttribute");
