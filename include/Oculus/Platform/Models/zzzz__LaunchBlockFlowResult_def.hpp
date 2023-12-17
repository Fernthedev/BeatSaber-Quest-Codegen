#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchBlockFlowResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchBlockFlowResult);
// Type: Oculus.Platform.Models::LaunchBlockFlowResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13441))
// CS Name: ::Oculus.Platform.Models::LaunchBlockFlowResult*
class CORDL_TYPE LaunchBlockFlowResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field DidBlock offset 0x10
 __declspec(property(get=__get_DidBlock, put=__set_DidBlock)) bool  DidBlock;

/// @brief Field DidCancel offset 0x11
 __declspec(property(get=__get_DidCancel, put=__set_DidCancel)) bool  DidCancel;

constexpr void __set_DidBlock(bool  value) ;

constexpr bool& __get_DidBlock() ;

constexpr bool const& __get_DidBlock() const;

constexpr void __set_DidCancel(bool  value) ;

constexpr bool& __get_DidCancel() ;

constexpr bool const& __get_DidCancel() const;

static inline ::Oculus::Platform::Models::LaunchBlockFlowResult* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2706404 size 0x90 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchBlockFlowResult(LaunchBlockFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchBlockFlowResult(LaunchBlockFlowResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LaunchBlockFlowResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchBlockFlowResult, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchBlockFlowResult*, "Oculus.Platform.Models", "LaunchBlockFlowResult");
