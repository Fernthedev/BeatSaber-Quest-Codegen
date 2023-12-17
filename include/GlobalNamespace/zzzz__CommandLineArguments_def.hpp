#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandLineArguments)
// Forward declare root types
namespace GlobalNamespace {
class CommandLineArguments;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandLineArguments);
// Type: ::CommandLineArguments
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15823))
// CS Name: ::CommandLineArguments*
class CORDL_TYPE CommandLineArguments : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kArgumentPrefix offset 0x0
static constexpr char16_t  kArgumentPrefix{u'-'};

/// @brief Field kArgumentSeparator offset 0x0
static constexpr char16_t  kArgumentSeparator{u','};

/// @brief Method GetCommandLineArgs addr 0xe25354 size 0x3c virtual false final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetCommandLineArgs() ;

/// @brief Method Contains addr 0xe25390 size 0x84 virtual false final false
static inline bool Contains(::StringW  argument) ;

/// @brief Method GetParameter addr 0xe25414 size 0xa0 virtual false final false
static inline ::StringW GetParameter(::StringW  argument) ;

// Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandLineArguments(CommandLineArguments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandLineArguments(CommandLineArguments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommandLineArguments()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandLineArguments, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandLineArguments);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandLineArguments*, "", "CommandLineArguments");
