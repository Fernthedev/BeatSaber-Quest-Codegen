#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimeInformation)
namespace System::Runtime::InteropServices {
struct Architecture;
}
namespace System::Runtime::InteropServices {
struct OSPlatform;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class RuntimeInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::RuntimeInformation);
// Type: System.Runtime.InteropServices::RuntimeInformation
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3335))
// CS Name: ::System.Runtime.InteropServices::RuntimeInformation*
class CORDL_TYPE RuntimeInformation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__osArchitecture(::System::Runtime::InteropServices::Architecture  value) ;

static inline ::System::Runtime::InteropServices::Architecture getStaticF__osArchitecture() ;

static inline void setStaticF__processArchitecture(::System::Runtime::InteropServices::Architecture  value) ;

static inline ::System::Runtime::InteropServices::Architecture getStaticF__processArchitecture() ;

static inline void setStaticF__osPlatform(::System::Runtime::InteropServices::OSPlatform  value) ;

static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__osPlatform() ;

/// @brief Method GetRuntimeArchitecture addr 0x24d8120 size 0x4 virtual false final false
static inline ::StringW GetRuntimeArchitecture() ;

/// @brief Method GetOSName addr 0x24d8124 size 0x4 virtual false final false
static inline ::StringW GetOSName() ;

/// @brief Method IsOSPlatform addr 0x24d8128 size 0x94 virtual false final false
static inline bool IsOSPlatform(::System::Runtime::InteropServices::OSPlatform  osPlatform) ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeInformation(RuntimeInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeInformation(RuntimeInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeInformation()  = default;
public:


// Fields

// Static field _osArchitecture

// Static field _processArchitecture

// Static field _osPlatform


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::RuntimeInformation, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::RuntimeInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::RuntimeInformation*, "System.Runtime.InteropServices", "RuntimeInformation");
