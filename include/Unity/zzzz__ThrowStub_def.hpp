#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ObjectDisposedException_def.hpp"
CORDL_MODULE_EXPORT(ThrowStub)
// Forward declare root types
namespace Unity {
class ThrowStub;
}
// Write type traits
MARK_REF_PTR_T(::Unity::ThrowStub);
// Type: Unity::ThrowStub
namespace Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3951))
// CS Name: ::Unity::ThrowStub*
class CORDL_TYPE ThrowStub : public ::System::ObjectDisposedException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ObjectDisposedException)]{};

/// @brief Method ThrowNotSupportedException addr 0x258c838 size 0x1040 virtual false final false
static inline void ThrowNotSupportedException() ;

// Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowStub(ThrowStub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowStub(ThrowStub const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThrowStub()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::ThrowStub, 0x98>, "Size mismatch!");

} // namespace end def Unity
NEED_NO_BOX(::Unity::ThrowStub);
DEFINE_IL2CPP_ARG_TYPE(::Unity::ThrowStub*, "Unity", "ThrowStub");
