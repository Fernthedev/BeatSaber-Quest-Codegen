#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NclUtilities)
namespace System::Net {
class IPHostEntry;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net {
class NclUtilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NclUtilities);
// Type: System.Net::NclUtilities
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9074))
// CS Name: ::System.Net::NclUtilities*
class CORDL_TYPE NclUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>  value) ;

static inline ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> getStaticF__LocalAddresses() ;

static inline void setStaticF__LocalAddressesLock(::System::Object*  value) ;

static inline ::System::Object* getStaticF__LocalAddressesLock() ;

static inline void setStaticF__LocalDomainName(::StringW  value) ;

static inline ::StringW getStaticF__LocalDomainName() ;

/// @brief Method IsFatal addr 0x299d724 size 0xc0 virtual false final false
static inline bool IsFatal(::System::Exception*  exception) ;

/// @brief Method IsAddressLocal addr 0x299d7e4 size 0x8c virtual false final false
static inline bool IsAddressLocal(::System::Net::IPAddress*  ipAddress) ;

/// @brief Method GetLocalHost addr 0x299dd2c size 0x18 virtual false final false
static inline ::System::Net::IPHostEntry* GetLocalHost() ;

/// @brief Method get_LocalAddresses addr 0x299d870 size 0x4bc virtual false final false
static inline ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> get_LocalAddresses() ;

/// @brief Method get_LocalAddressesLock addr 0x299dd44 size 0xa4 virtual false final false
static inline ::System::Object* get_LocalAddressesLock() ;

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NclUtilities(NclUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NclUtilities(NclUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NclUtilities()  = default;
public:


// Fields

// Static field _LocalAddresses

// Static field _LocalAddressesLock

// Static field _LocalDomainName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NclUtilities, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::NclUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NclUtilities*, "System.Net", "NclUtilities");
