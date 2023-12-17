#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Debugger)
// Forward declare root types
namespace System::Diagnostics {
class Debugger;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Debugger);
// Type: System.Diagnostics::Debugger
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3738))
// CS Name: ::System.Diagnostics::Debugger*
class CORDL_TYPE Debugger : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_DefaultCategory(::StringW  value) ;

static inline ::StringW getStaticF_DefaultCategory() ;

/// @brief Method IsLogging addr 0x2579e1c size 0x4 virtual false final false
static inline bool IsLogging() ;

/// @brief Method Log_icall addr 0x2579e20 size 0x4 virtual false final false
static inline void Log_icall(int32_t  level, ByRef<::StringW>  category, ByRef<::StringW>  message) ;

/// @brief Method Log addr 0x2579e24 size 0x6c virtual false final false
static inline void Log(int32_t  level, ::StringW  category, ::StringW  message) ;

/// @brief Method NotifyOfCrossThreadDependency addr 0x2579e90 size 0x4 virtual false final false
static inline void NotifyOfCrossThreadDependency() ;

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debugger(Debugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debugger(Debugger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Debugger()  = default;
public:


// Fields

// Static field DefaultCategory


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Debugger, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::Debugger);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
