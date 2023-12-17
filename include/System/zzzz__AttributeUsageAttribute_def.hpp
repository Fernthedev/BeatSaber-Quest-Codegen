#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AttributeUsageAttribute)
namespace System {
struct AttributeTargets;
}
// Forward declare root types
namespace System {
class AttributeUsageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::AttributeUsageAttribute);
// Type: System::AttributeUsageAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2355))
// CS Name: ::System::AttributeUsageAttribute*
class CORDL_TYPE AttributeUsageAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _attributeTarget offset 0x10
 __declspec(property(get=__get__attributeTarget, put=__set__attributeTarget)) ::System::AttributeTargets  _attributeTarget;

/// @brief Field _allowMultiple offset 0x14
 __declspec(property(get=__get__allowMultiple, put=__set__allowMultiple)) bool  _allowMultiple;

/// @brief Field _inherited offset 0x15
 __declspec(property(get=__get__inherited, put=__set__inherited)) bool  _inherited;

 __declspec(property(get=get_AllowMultiple, put=set_AllowMultiple)) bool  AllowMultiple;

 __declspec(property(get=get_Inherited, put=set_Inherited)) bool  Inherited;

constexpr void __set__attributeTarget(::System::AttributeTargets  value) ;

constexpr ::System::AttributeTargets& __get__attributeTarget() ;

constexpr ::System::AttributeTargets const& __get__attributeTarget() const;

constexpr void __set__allowMultiple(bool  value) ;

constexpr bool& __get__allowMultiple() ;

constexpr bool const& __get__allowMultiple() const;

constexpr void __set__inherited(bool  value) ;

constexpr bool& __get__inherited() ;

constexpr bool const& __get__inherited() const;

static inline void setStaticF_Default(::System::AttributeUsageAttribute*  value) ;

static inline ::System::AttributeUsageAttribute* getStaticF_Default() ;

static inline ::System::AttributeUsageAttribute* New_ctor(::System::AttributeTargets  validOn) ;

/// @brief Method .ctor addr 0x252147c size 0x38 virtual false final false
inline void _ctor(::System::AttributeTargets  validOn) ;

/// @brief Method get_AllowMultiple addr 0x25214b4 size 0x8 virtual false final false
inline bool get_AllowMultiple() ;

/// @brief Method set_AllowMultiple addr 0x25214bc size 0xc virtual false final false
inline void set_AllowMultiple(bool  value) ;

/// @brief Method get_Inherited addr 0x25214c8 size 0x8 virtual false final false
inline bool get_Inherited() ;

/// @brief Method set_Inherited addr 0x25214d0 size 0xc virtual false final false
inline void set_Inherited(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeUsageAttribute(AttributeUsageAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeUsageAttribute(AttributeUsageAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AttributeUsageAttribute()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AttributeUsageAttribute, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AttributeUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
