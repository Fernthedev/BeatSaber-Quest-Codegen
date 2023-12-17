#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventSourceAttribute)
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSourceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSourceAttribute);
// Type: System.Diagnostics.Tracing::EventSourceAttribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3748))
// CS Name: ::System.Diagnostics.Tracing::EventSourceAttribute*
class CORDL_TYPE EventSourceAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <Guid>k__BackingField offset 0x10
 __declspec(property(get=__get__Guid_k__BackingField, put=__set__Guid_k__BackingField)) ::StringW  _Guid_k__BackingField;

/// @brief Field <Name>k__BackingField offset 0x18
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

 __declspec(property(put=set_Guid)) ::StringW  Guid;

 __declspec(property(put=set_Name)) ::StringW  Name;

constexpr void __set__Guid_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Guid_k__BackingField() ;

constexpr ::StringW const& __get__Guid_k__BackingField() const;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

/// @brief Method set_Guid addr 0x257bf1c size 0x8 virtual false final false
inline void set_Guid(::StringW  value) ;

/// @brief Method set_Name addr 0x257bf24 size 0x8 virtual false final false
inline void set_Name(::StringW  value) ;

static inline ::System::Diagnostics::Tracing::EventSourceAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x257bf2c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSourceAttribute(EventSourceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSourceAttribute(EventSourceAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventSourceAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSourceAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceAttribute*, "System.Diagnostics.Tracing", "EventSourceAttribute");
