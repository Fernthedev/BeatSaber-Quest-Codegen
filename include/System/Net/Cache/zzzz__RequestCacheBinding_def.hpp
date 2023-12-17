#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheBinding)
namespace System::Net::Cache {
class RequestCache;
}
namespace System::Net::Cache {
class RequestCacheValidator;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheBinding);
// Type: System.Net.Cache::RequestCacheBinding
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9320))
// CS Name: ::System.Net.Cache::RequestCacheBinding*
class CORDL_TYPE RequestCacheBinding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_RequestCache offset 0x10
 __declspec(property(get=__get_m_RequestCache, put=__set_m_RequestCache)) ::System::Net::Cache::RequestCache*  m_RequestCache;

/// @brief Field m_CacheValidator offset 0x18
 __declspec(property(get=__get_m_CacheValidator, put=__set_m_CacheValidator)) ::System::Net::Cache::RequestCacheValidator*  m_CacheValidator;

/// @brief Field m_Policy offset 0x20
 __declspec(property(get=__get_m_Policy, put=__set_m_Policy)) ::System::Net::Cache::RequestCachePolicy*  m_Policy;

 __declspec(property(get=get_Cache)) ::System::Net::Cache::RequestCache*  Cache;

 __declspec(property(get=get_Validator)) ::System::Net::Cache::RequestCacheValidator*  Validator;

 __declspec(property(get=get_Policy)) ::System::Net::Cache::RequestCachePolicy*  Policy;

constexpr void __set_m_RequestCache(::System::Net::Cache::RequestCache*  value) ;

constexpr ::System::Net::Cache::RequestCache* __get_m_RequestCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCache*> __get_m_RequestCache() const;

constexpr void __set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator*  value) ;

constexpr ::System::Net::Cache::RequestCacheValidator* __get_m_CacheValidator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheValidator*> __get_m_CacheValidator() const;

constexpr void __set_m_Policy(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr ::System::Net::Cache::RequestCachePolicy* __get_m_Policy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> __get_m_Policy() const;

static inline ::System::Net::Cache::RequestCacheBinding* New_ctor(::System::Net::Cache::RequestCache*  requestCache, ::System::Net::Cache::RequestCacheValidator*  cacheValidator, ::System::Net::Cache::RequestCachePolicy*  policy) ;

/// @brief Method .ctor addr 0x29f13f0 size 0x3c virtual false final false
inline void _ctor(::System::Net::Cache::RequestCache*  requestCache, ::System::Net::Cache::RequestCacheValidator*  cacheValidator, ::System::Net::Cache::RequestCachePolicy*  policy) ;

/// @brief Method get_Cache addr 0x29f146c size 0x8 virtual false final false
inline ::System::Net::Cache::RequestCache* get_Cache() ;

/// @brief Method get_Validator addr 0x29f1474 size 0x8 virtual false final false
inline ::System::Net::Cache::RequestCacheValidator* get_Validator() ;

/// @brief Method get_Policy addr 0x29f147c size 0x8 virtual false final false
inline ::System::Net::Cache::RequestCachePolicy* get_Policy() ;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCacheBinding(RequestCacheBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCacheBinding(RequestCacheBinding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RequestCacheBinding()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheBinding, 0x28>, "Size mismatch!");

} // namespace end def System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheBinding*, "System.Net.Cache", "RequestCacheBinding");
