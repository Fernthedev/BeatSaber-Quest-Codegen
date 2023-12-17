#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpVersion)
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpVersion;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpVersion);
// Type: System.Net::HttpVersion
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9028))
// CS Name: ::System.Net::HttpVersion*
class CORDL_TYPE HttpVersion : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Unknown(::System::Version*  value) ;

static inline ::System::Version* getStaticF_Unknown() ;

static inline void setStaticF_Version10(::System::Version*  value) ;

static inline ::System::Version* getStaticF_Version10() ;

static inline void setStaticF_Version11(::System::Version*  value) ;

static inline ::System::Version* getStaticF_Version11() ;

static inline void setStaticF_Version20(::System::Version*  value) ;

static inline ::System::Version* getStaticF_Version20() ;

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpVersion(HttpVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpVersion(HttpVersion const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpVersion()  = default;
public:


// Fields

// Static field Unknown

// Static field Version10

// Static field Version11

// Static field Version20


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpVersion, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpVersion*, "System.Net", "HttpVersion");
