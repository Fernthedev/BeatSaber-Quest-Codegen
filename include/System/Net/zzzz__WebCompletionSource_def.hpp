#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebCompletionSource)
// Forward declare root types
namespace System::Net {
class WebCompletionSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebCompletionSource);
// Type: System.Net::WebCompletionSource
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9212)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9212), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9213))
// CS Name: ::System.Net::WebCompletionSource*
class CORDL_TYPE WebCompletionSource : public ::System::Net::WebCompletionSource_1<::System::Object*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Net::WebCompletionSource_1<::System::Object*>)]{};

static inline ::System::Net::WebCompletionSource* New_ctor() ;

/// @brief Method .ctor addr 0x29dcae8 size 0x4c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCompletionSource(WebCompletionSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCompletionSource(WebCompletionSource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebCompletionSource()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebCompletionSource, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebCompletionSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebCompletionSource*, "System.Net", "WebCompletionSource");
