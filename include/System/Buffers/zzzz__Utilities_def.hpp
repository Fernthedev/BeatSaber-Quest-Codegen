#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utilities)
// Forward declare root types
namespace System::Buffers {
class Utilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffers::Utilities);
// Type: System.Buffers::Utilities
namespace System::Buffers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3890))
// CS Name: ::System.Buffers::Utilities*
class CORDL_TYPE Utilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SelectBucketIndex addr 0x258c5fc size 0x7c virtual false final false
static inline int32_t SelectBucketIndex(int32_t  bufferSize) ;

/// @brief Method GetMaxSizeForBucket addr 0x258c678 size 0xc virtual false final false
static inline int32_t GetMaxSizeForBucket(int32_t  binIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utilities(Utilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utilities(Utilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Utilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::Utilities, 0x10>, "Size mismatch!");

} // namespace end def System::Buffers
NEED_NO_BOX(::System::Buffers::Utilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Utilities*, "System.Buffers", "Utilities");
