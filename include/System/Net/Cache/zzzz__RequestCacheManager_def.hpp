#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RequestCacheManager)
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCachingSectionInternal;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheManager);
// Type: System.Net.Cache::RequestCacheManager
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9317))
// CS Name: ::System.Net.Cache::RequestCacheManager*
class CORDL_TYPE RequestCacheManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_CacheConfigSettings(::System::Net::Cache::RequestCachingSectionInternal*  value) ;

static inline ::System::Net::Cache::RequestCachingSectionInternal* getStaticF_s_CacheConfigSettings() ;

static inline void setStaticF_s_BypassCacheBinding(::System::Net::Cache::RequestCacheBinding*  value) ;

static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_BypassCacheBinding() ;

static inline void setStaticF_s_DefaultGlobalBinding(::System::Net::Cache::RequestCacheBinding*  value) ;

static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultGlobalBinding() ;

static inline void setStaticF_s_DefaultHttpBinding(::System::Net::Cache::RequestCacheBinding*  value) ;

static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultHttpBinding() ;

static inline void setStaticF_s_DefaultFtpBinding(::System::Net::Cache::RequestCacheBinding*  value) ;

static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultFtpBinding() ;

/// @brief Method GetBinding addr 0x29f0f30 size 0x1fc virtual false final false
static inline ::System::Net::Cache::RequestCacheBinding* GetBinding(::StringW  internedScheme) ;

/// @brief Method LoadConfigSettings addr 0x29f112c size 0x184 virtual false final false
static inline void LoadConfigSettings() ;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCacheManager(RequestCacheManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCacheManager(RequestCacheManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RequestCacheManager()  = default;
public:


// Fields

// Static field s_CacheConfigSettings

// Static field s_BypassCacheBinding

// Static field s_DefaultGlobalBinding

// Static field s_DefaultHttpBinding

// Static field s_DefaultFtpBinding


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheManager, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheManager*, "System.Net.Cache", "RequestCacheManager");
