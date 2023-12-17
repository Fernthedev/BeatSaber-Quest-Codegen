#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AssertExtensions)
// Forward declare root types
namespace GlobalNamespace {
class AssertExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssertExtensions);
// Type: ::AssertExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15840))
// CS Name: ::AssertExtensions*
class CORDL_TYPE AssertExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kUnityAssertions offset 0x0
static constexpr ::ConstString  kUnityAssertions{u"UNITY_ASSERTIONS"};

/// @brief Method LessThan addr 0xe265e0 size 0x4 virtual false final false
static inline void LessThan(float_t  expected, float_t  value, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssertExtensions(AssertExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssertExtensions(AssertExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssertExtensions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssertExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssertExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssertExtensions*, "", "AssertExtensions");
