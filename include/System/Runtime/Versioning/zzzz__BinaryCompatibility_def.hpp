#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryCompatibility)
// Forward declare root types
namespace System::Runtime::Versioning {
class BinaryCompatibility;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Versioning::BinaryCompatibility);
// Type: System.Runtime.Versioning::BinaryCompatibility
namespace System::Runtime::Versioning {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3192))
// CS Name: ::System.Runtime.Versioning::BinaryCompatibility*
class CORDL_TYPE BinaryCompatibility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_TargetsAtLeast_Desktop_V4_5(bool  value) ;

static inline bool getStaticF_TargetsAtLeast_Desktop_V4_5() ;

static inline void setStaticF_TargetsAtLeast_Desktop_V4_5_1(bool  value) ;

static inline bool getStaticF_TargetsAtLeast_Desktop_V4_5_1() ;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCompatibility(BinaryCompatibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCompatibility(BinaryCompatibility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BinaryCompatibility()  = default;
public:


// Fields

// Static field TargetsAtLeast_Desktop_V4_5

// Static field TargetsAtLeast_Desktop_V4_5_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Versioning::BinaryCompatibility, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Versioning
NEED_NO_BOX(::System::Runtime::Versioning::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Versioning::BinaryCompatibility*, "System.Runtime.Versioning", "BinaryCompatibility");
