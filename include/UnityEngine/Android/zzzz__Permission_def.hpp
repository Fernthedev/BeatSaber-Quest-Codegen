#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Permission)
namespace UnityEngine::Android {
class PermissionCallbacks;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
struct Permission;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::Permission);
// Type: UnityEngine.Android::Permission
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14930))
// CS Name: ::UnityEngine.Android::Permission
struct CORDL_TYPE Permission : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject*  value) ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_UnityPermissions() ;

static inline void setStaticF_m_Activity(::UnityEngine::AndroidJavaObject*  value) ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_Activity() ;

/// @brief Method GetActivity addr 0x2c8db44 size 0x218 virtual false final false
static inline ::UnityEngine::AndroidJavaObject* GetActivity() ;

/// @brief Method GetUnityPermissions addr 0x2c8dd5c size 0xb8 virtual false final false
static inline ::UnityEngine::AndroidJavaObject* GetUnityPermissions() ;

/// @brief Method HasUserAuthorizedPermission addr 0x2c8de14 size 0x120 virtual false final false
static inline bool HasUserAuthorizedPermission(::StringW  permission) ;

/// @brief Method RequestUserPermission addr 0x2c8df34 size 0xa4 virtual false final false
static inline void RequestUserPermission(::StringW  permission, ::UnityEngine::Android::PermissionCallbacks*  callbacks) ;

/// @brief Method RequestUserPermissions addr 0x2c8dfd8 size 0x138 virtual false final false
static inline void RequestUserPermissions(::ArrayW<::StringW,::Array<::StringW>*>  permissions, ::UnityEngine::Android::PermissionCallbacks*  callbacks) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Permission(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Permission()  = default;


// Fields

// Static field m_UnityPermissions

// Static field m_Activity


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::Permission, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::Permission, "UnityEngine.Android", "Permission");
