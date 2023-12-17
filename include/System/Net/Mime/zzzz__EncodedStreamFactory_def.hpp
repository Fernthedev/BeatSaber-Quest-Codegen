#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EncodedStreamFactory)
// Forward declare root types
namespace System::Net::Mime {
class EncodedStreamFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mime::EncodedStreamFactory);
// Type: System.Net.Mime::EncodedStreamFactory
namespace System::Net::Mime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9375))
// CS Name: ::System.Net.Mime::EncodedStreamFactory*
class CORDL_TYPE EncodedStreamFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::System::Net::Mime::EncodedStreamFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2901770 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncodedStreamFactory(EncodedStreamFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncodedStreamFactory(EncodedStreamFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EncodedStreamFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mime::EncodedStreamFactory, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Mime
NEED_NO_BOX(::System::Net::Mime::EncodedStreamFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mime::EncodedStreamFactory*, "System.Net.Mime", "EncodedStreamFactory");
