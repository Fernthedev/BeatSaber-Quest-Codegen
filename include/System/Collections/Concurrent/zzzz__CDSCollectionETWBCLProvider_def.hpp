#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
CORDL_MODULE_EXPORT(CDSCollectionETWBCLProvider)
// Forward declare root types
namespace System::Collections::Concurrent {
class CDSCollectionETWBCLProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Concurrent::CDSCollectionETWBCLProvider);
// Type: System.Collections.Concurrent::CDSCollectionETWBCLProvider
namespace System::Collections::Concurrent {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3747))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9526))
// CS Name: ::System.Collections.Concurrent::CDSCollectionETWBCLProvider*
class CORDL_TYPE CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Diagnostics::Tracing::EventSource)]{};

static inline void setStaticF_Log(::System::Collections::Concurrent::CDSCollectionETWBCLProvider*  value) ;

static inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* getStaticF_Log() ;

static inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2941a4c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ConcurrentBag_TryTakeSteals addr 0x2941a54 size 0x38 virtual false final false
inline void ConcurrentBag_TryTakeSteals() ;

/// @brief Method ConcurrentBag_TryPeekSteals addr 0x2941a8c size 0x38 virtual false final false
inline void ConcurrentBag_TryPeekSteals() ;

// Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CDSCollectionETWBCLProvider()  = default;
public:


// Fields

// Static field Log


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Concurrent::CDSCollectionETWBCLProvider, 0x18>, "Size mismatch!");

} // namespace end def System::Collections::Concurrent
NEED_NO_BOX(::System::Collections::Concurrent::CDSCollectionETWBCLProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
