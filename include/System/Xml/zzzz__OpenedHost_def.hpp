#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenedHost)
// Forward declare root types
namespace System::Xml {
class OpenedHost;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::OpenedHost);
// Type: System.Xml::OpenedHost
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11552))
// CS Name: ::System.Xml::OpenedHost*
class CORDL_TYPE OpenedHost : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field nonCachedConnectionsCount offset 0x10
 __declspec(property(get=__get_nonCachedConnectionsCount, put=__set_nonCachedConnectionsCount)) int32_t  nonCachedConnectionsCount;

constexpr void __set_nonCachedConnectionsCount(int32_t  value) ;

constexpr int32_t& __get_nonCachedConnectionsCount() ;

constexpr int32_t const& __get_nonCachedConnectionsCount() const;

static inline ::System::Xml::OpenedHost* New_ctor() ;

/// @brief Method .ctor addr 0x28a4244 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenedHost(OpenedHost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenedHost(OpenedHost const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OpenedHost()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::OpenedHost, 0x18>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::OpenedHost);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OpenedHost*, "System.Xml", "OpenedHost");
