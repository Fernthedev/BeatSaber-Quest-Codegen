#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CachedAssetBundle)
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
struct CachedAssetBundle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CachedAssetBundle);
// Type: UnityEngine::CachedAssetBundle
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10144))
// CS Name: ::UnityEngine::CachedAssetBundle
struct CORDL_TYPE CachedAssetBundle : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Hash offset 0x8
 __declspec(property(get=__get_m_Hash, put=__set_m_Hash)) ::UnityEngine::Hash128  m_Hash;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_hash)) ::UnityEngine::Hash128  hash;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Hash(::UnityEngine::Hash128  value) ;

constexpr ::UnityEngine::Hash128& __get_m_Hash() ;

constexpr ::UnityEngine::Hash128 const& __get_m_Hash() const;

/// @brief Method .ctor addr 0x2cc652c size 0xc virtual false final false
inline void _ctor(::StringW  name, ::UnityEngine::Hash128  hash) ;

/// @brief Method get_name addr 0x2cc5f1c size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method get_hash addr 0x2cc5f24 size 0xc virtual false final false
inline ::UnityEngine::Hash128 get_hash() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None }]
constexpr CachedAssetBundle(::StringW  m_Name, ::UnityEngine::Hash128  m_Hash) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CachedAssetBundle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CachedAssetBundle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CachedAssetBundle, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CachedAssetBundle, "UnityEngine", "CachedAssetBundle");
