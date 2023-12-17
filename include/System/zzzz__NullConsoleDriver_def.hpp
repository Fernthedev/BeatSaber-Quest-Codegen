#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullConsoleDriver)
namespace System {
class IConsoleDriver;
}
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class NullConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::NullConsoleDriver);
// Type: System::NullConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2612))
// CS Name: ::System::NullConsoleDriver*
class CORDL_TYPE NullConsoleDriver : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::IConsoleDriver"
constexpr operator  ::System::IConsoleDriver*() noexcept;

static inline void setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo  value) ;

static inline ::System::ConsoleKeyInfo getStaticF_EmptyConsoleKeyInfo() ;

/// @brief Method ReadKey addr 0x25fec6c size 0x5c virtual true final true
inline ::System::ConsoleKeyInfo ReadKey(bool  intercept) ;

static inline ::System::NullConsoleDriver* New_ctor() ;

/// @brief Method .ctor addr 0x25f7890 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullConsoleDriver(NullConsoleDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullConsoleDriver(NullConsoleDriver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullConsoleDriver()  = default;
public:


// Fields

// Static field EmptyConsoleKeyInfo


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NullConsoleDriver, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::NullConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::NullConsoleDriver*, "System", "NullConsoleDriver");
