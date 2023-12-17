#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContinueDelegate)
namespace System {
class Object;
}
namespace System::Net {
class WebHeaderCollection;
}
// Forward declare root types
namespace System::Net {
class HttpContinueDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpContinueDelegate);
// Type: System.Net::HttpContinueDelegate
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9078))
// CS Name: ::System.Net::HttpContinueDelegate*
class CORDL_TYPE HttpContinueDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::HttpContinueDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x299e4e8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x299e5ac size 0x14 virtual true final false
inline void Invoke(int32_t  StatusCode, ::System::Net::WebHeaderCollection*  httpHeaders) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContinueDelegate(HttpContinueDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContinueDelegate(HttpContinueDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpContinueDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpContinueDelegate, 0x80>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpContinueDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpContinueDelegate*, "System.Net", "HttpContinueDelegate");
