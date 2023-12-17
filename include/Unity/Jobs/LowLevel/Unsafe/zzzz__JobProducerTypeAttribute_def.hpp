#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JobProducerTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobProducerTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute);
// Type: Unity.Jobs.LowLevel.Unsafe::JobProducerTypeAttribute
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9978))
// CS Name: ::Unity.Jobs.LowLevel.Unsafe::JobProducerTypeAttribute*
class CORDL_TYPE JobProducerTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <ProducerType>k__BackingField offset 0x10
 __declspec(property(get=__get__ProducerType_k__BackingField, put=__set__ProducerType_k__BackingField)) ::System::Type*  _ProducerType_k__BackingField;

constexpr void __set__ProducerType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__ProducerType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__ProducerType_k__BackingField() const;

static inline ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute* New_ctor(::System::Type*  producerType) ;

/// @brief Method .ctor addr 0x2c9db70 size 0x28 virtual false final false
inline void _ctor(::System::Type*  producerType) ;

// Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JobProducerTypeAttribute(JobProducerTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobProducerTypeAttribute(JobProducerTypeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JobProducerTypeAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute, 0x18>, "Size mismatch!");

} // namespace end def Unity::Jobs::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*, "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
