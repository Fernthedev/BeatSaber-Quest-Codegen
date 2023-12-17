#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReliabilityContractAttribute)
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class ReliabilityContractAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute);
// Type: System.Runtime.ConstrainedExecution::ReliabilityContractAttribute
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3352))
// CS Name: ::System.Runtime.ConstrainedExecution::ReliabilityContractAttribute*
class CORDL_TYPE ReliabilityContractAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <ConsistencyGuarantee>k__BackingField offset 0x10
 __declspec(property(get=__get__ConsistencyGuarantee_k__BackingField, put=__set__ConsistencyGuarantee_k__BackingField)) ::System::Runtime::ConstrainedExecution::Consistency  _ConsistencyGuarantee_k__BackingField;

/// @brief Field <Cer>k__BackingField offset 0x14
 __declspec(property(get=__get__Cer_k__BackingField, put=__set__Cer_k__BackingField)) ::System::Runtime::ConstrainedExecution::Cer  _Cer_k__BackingField;

constexpr void __set__ConsistencyGuarantee_k__BackingField(::System::Runtime::ConstrainedExecution::Consistency  value) ;

constexpr ::System::Runtime::ConstrainedExecution::Consistency& __get__ConsistencyGuarantee_k__BackingField() ;

constexpr ::System::Runtime::ConstrainedExecution::Consistency const& __get__ConsistencyGuarantee_k__BackingField() const;

constexpr void __set__Cer_k__BackingField(::System::Runtime::ConstrainedExecution::Cer  value) ;

constexpr ::System::Runtime::ConstrainedExecution::Cer& __get__Cer_k__BackingField() ;

constexpr ::System::Runtime::ConstrainedExecution::Cer const& __get__Cer_k__BackingField() const;

static inline ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute* New_ctor(::System::Runtime::ConstrainedExecution::Consistency  consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer  cer) ;

/// @brief Method .ctor addr 0x24da6e0 size 0x2c virtual false final false
inline void _ctor(::System::Runtime::ConstrainedExecution::Consistency  consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer  cer) ;

// Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReliabilityContractAttribute(ReliabilityContractAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReliabilityContractAttribute(ReliabilityContractAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReliabilityContractAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::ConstrainedExecution
NEED_NO_BOX(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
