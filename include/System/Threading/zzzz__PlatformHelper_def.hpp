#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformHelper)
// Forward declare root types
namespace System::Threading {
class PlatformHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::PlatformHelper);
// Type: System.Threading::PlatformHelper
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2681))
// CS Name: ::System.Threading::PlatformHelper*
class CORDL_TYPE PlatformHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_processorCount(int32_t  value) ;

static inline int32_t getStaticF_s_processorCount() ;

static inline void setStaticF_s_lastProcessorCountRefreshTicks(int32_t  value) ;

static inline int32_t getStaticF_s_lastProcessorCountRefreshTicks() ;

static inline void setStaticF_IsSingleProcessor(bool  value) ;

static inline bool getStaticF_IsSingleProcessor() ;

/// @brief Method get_ProcessorCount addr 0x26122b4 size 0xec virtual false final false
static inline int32_t get_ProcessorCount() ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformHelper(PlatformHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformHelper(PlatformHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformHelper()  = default;
public:


// Fields

// Static field s_processorCount

// Static field s_lastProcessorCountRefreshTicks

// Static field IsSingleProcessor


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::PlatformHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::PlatformHelper*, "System.Threading", "PlatformHelper");
