#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UtcTimeProvider)
namespace BGNet::Core {
class ITimeProvider;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class UtcTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UtcTimeProvider);
// Type: ::UtcTimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12993))
// CS Name: ::UtcTimeProvider*
class CORDL_TYPE UtcTimeProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr operator  ::BGNet::Core::ITimeProvider*() noexcept;

static inline void setStaticF__epoch(::System::DateTime  value) ;

static inline ::System::DateTime getStaticF__epoch() ;

static inline void setStaticF_instance(::GlobalNamespace::UtcTimeProvider*  value) ;

static inline ::GlobalNamespace::UtcTimeProvider* getStaticF_instance() ;

/// @brief Method GetTimeMs addr 0xe5ad8c size 0x2c virtual true final true
inline int64_t GetTimeMs() ;

/// @brief Method GetTicks addr 0xe49968 size 0xb4 virtual true final true
inline int64_t GetTicks() ;

static inline ::GlobalNamespace::UtcTimeProvider* New_ctor() ;

/// @brief Method .ctor addr 0xe5adb8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UtcTimeProvider(UtcTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UtcTimeProvider(UtcTimeProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UtcTimeProvider()  = default;
public:


// Fields

// Static field _epoch

// Static field instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UtcTimeProvider, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UtcTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UtcTimeProvider*, "", "UtcTimeProvider");
