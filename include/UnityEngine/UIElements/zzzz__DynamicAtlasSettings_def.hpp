#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasSettings)
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFiltersInternal;
}
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasSettings);
// Type: UnityEngine.UIElements::DynamicAtlasSettings
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7017))
// CS Name: ::UnityEngine.UIElements::DynamicAtlasSettings*
class CORDL_TYPE DynamicAtlasSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_MinAtlasSize offset 0x10
 __declspec(property(get=__get_m_MinAtlasSize, put=__set_m_MinAtlasSize)) int32_t  m_MinAtlasSize;

/// @brief Field m_MaxAtlasSize offset 0x14
 __declspec(property(get=__get_m_MaxAtlasSize, put=__set_m_MaxAtlasSize)) int32_t  m_MaxAtlasSize;

/// @brief Field m_MaxSubTextureSize offset 0x18
 __declspec(property(get=__get_m_MaxSubTextureSize, put=__set_m_MaxSubTextureSize)) int32_t  m_MaxSubTextureSize;

/// @brief Field m_ActiveFilters offset 0x1c
 __declspec(property(get=__get_m_ActiveFilters, put=__set_m_ActiveFilters)) ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  m_ActiveFilters;

/// @brief Field m_CustomFilter offset 0x20
 __declspec(property(get=__get_m_CustomFilter, put=__set_m_CustomFilter)) ::UnityEngine::UIElements::DynamicAtlasCustomFilter*  m_CustomFilter;

 __declspec(property(get=get_minAtlasSize, put=set_minAtlasSize)) int32_t  minAtlasSize;

 __declspec(property(get=get_maxAtlasSize, put=set_maxAtlasSize)) int32_t  maxAtlasSize;

 __declspec(property(get=get_maxSubTextureSize, put=set_maxSubTextureSize)) int32_t  maxSubTextureSize;

 __declspec(property(get=get_activeFilters, put=set_activeFilters)) ::UnityEngine::UIElements::DynamicAtlasFilters  activeFilters;

 __declspec(property(get=get_customFilter, put=set_customFilter)) ::UnityEngine::UIElements::DynamicAtlasCustomFilter*  customFilter;

constexpr void __set_m_MinAtlasSize(int32_t  value) ;

constexpr int32_t& __get_m_MinAtlasSize() ;

constexpr int32_t const& __get_m_MinAtlasSize() const;

constexpr void __set_m_MaxAtlasSize(int32_t  value) ;

constexpr int32_t& __get_m_MaxAtlasSize() ;

constexpr int32_t const& __get_m_MaxAtlasSize() const;

constexpr void __set_m_MaxSubTextureSize(int32_t  value) ;

constexpr int32_t& __get_m_MaxSubTextureSize() ;

constexpr int32_t const& __get_m_MaxSubTextureSize() const;

constexpr void __set_m_ActiveFilters(::UnityEngine::UIElements::DynamicAtlasFiltersInternal  value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal& __get_m_ActiveFilters() ;

constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const& __get_m_ActiveFilters() const;

constexpr void __set_m_CustomFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter*  value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter* __get_m_CustomFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasCustomFilter*> __get_m_CustomFilter() const;

/// @brief Method get_minAtlasSize addr 0x2e164e4 size 0x8 virtual false final false
inline int32_t get_minAtlasSize() ;

/// @brief Method set_minAtlasSize addr 0x2e164ec size 0x8 virtual false final false
inline void set_minAtlasSize(int32_t  value) ;

/// @brief Method get_maxAtlasSize addr 0x2e164f4 size 0x8 virtual false final false
inline int32_t get_maxAtlasSize() ;

/// @brief Method set_maxAtlasSize addr 0x2e164fc size 0x8 virtual false final false
inline void set_maxAtlasSize(int32_t  value) ;

/// @brief Method get_maxSubTextureSize addr 0x2e16504 size 0x8 virtual false final false
inline int32_t get_maxSubTextureSize() ;

/// @brief Method set_maxSubTextureSize addr 0x2e1650c size 0x8 virtual false final false
inline void set_maxSubTextureSize(int32_t  value) ;

/// @brief Method get_activeFilters addr 0x2e16514 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::DynamicAtlasFilters get_activeFilters() ;

/// @brief Method set_activeFilters addr 0x2e1651c size 0x8 virtual false final false
inline void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters  value) ;

/// @brief Method get_defaultFilters addr 0x2e16524 size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters() ;

/// @brief Method get_customFilter addr 0x2e1652c size 0x8 virtual false final false
inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* get_customFilter() ;

/// @brief Method set_customFilter addr 0x2e16534 size 0x8 virtual false final false
inline void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter*  value) ;

/// @brief Method get_defaults addr 0x2e1653c size 0x80 virtual false final false
static inline ::UnityEngine::UIElements::DynamicAtlasSettings* get_defaults() ;

static inline ::UnityEngine::UIElements::DynamicAtlasSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2e165bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicAtlasSettings(DynamicAtlasSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicAtlasSettings(DynamicAtlasSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DynamicAtlasSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasSettings, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasSettings*, "UnityEngine.UIElements", "DynamicAtlasSettings");
