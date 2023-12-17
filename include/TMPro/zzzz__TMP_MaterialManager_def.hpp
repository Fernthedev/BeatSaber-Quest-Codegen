#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_MaterialManager)
namespace TMPro {
class TMP_FontAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass13_0;
}
namespace TMPro {
class __TMP_MaterialManager__MaskingMaterial;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass11_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass12_0;
}
namespace TMPro {
class __TMP_MaterialManager__FallbackMaterial;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass9_0;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace TMPro {
class TMP_MaterialManager;
}
namespace TMPro {
class __TMP_MaterialManager__FallbackMaterial;
}
namespace TMPro {
class __TMP_MaterialManager__MaskingMaterial;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass11_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass12_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass13_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager__FallbackMaterial);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager__MaskingMaterial);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0);
// Type: ::FallbackMaterial
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12397))
// CS Name: ::TMP_MaterialManager::FallbackMaterial*
class CORDL_TYPE __TMP_MaterialManager__FallbackMaterial : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field fallbackID offset 0x10
 __declspec(property(get=__get_fallbackID, put=__set_fallbackID)) int64_t  fallbackID;

/// @brief Field sourceMaterial offset 0x18
 __declspec(property(get=__get_sourceMaterial, put=__set_sourceMaterial)) ::UnityEngine::Material*  sourceMaterial;

/// @brief Field sourceMaterialCRC offset 0x20
 __declspec(property(get=__get_sourceMaterialCRC, put=__set_sourceMaterialCRC)) int32_t  sourceMaterialCRC;

/// @brief Field fallbackMaterial offset 0x28
 __declspec(property(get=__get_fallbackMaterial, put=__set_fallbackMaterial)) ::UnityEngine::Material*  fallbackMaterial;

/// @brief Field count offset 0x30
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

constexpr void __set_fallbackID(int64_t  value) ;

constexpr int64_t& __get_fallbackID() ;

constexpr int64_t const& __get_fallbackID() const;

constexpr void __set_sourceMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_sourceMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_sourceMaterial() const;

constexpr void __set_sourceMaterialCRC(int32_t  value) ;

constexpr int32_t& __get_sourceMaterialCRC() ;

constexpr int32_t const& __get_sourceMaterialCRC() const;

constexpr void __set_fallbackMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_fallbackMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_fallbackMaterial() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

static inline ::TMPro::__TMP_MaterialManager__FallbackMaterial* New_ctor() ;

/// @brief Method .ctor addr 0x2c3c460 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__FallbackMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager__FallbackMaterial(__TMP_MaterialManager__FallbackMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__FallbackMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager__FallbackMaterial(__TMP_MaterialManager__FallbackMaterial const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager__FallbackMaterial()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager__FallbackMaterial, 0x38>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::MaskingMaterial
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12398))
// CS Name: ::TMP_MaterialManager::MaskingMaterial*
class CORDL_TYPE __TMP_MaterialManager__MaskingMaterial : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field baseMaterial offset 0x10
 __declspec(property(get=__get_baseMaterial, put=__set_baseMaterial)) ::UnityEngine::Material*  baseMaterial;

/// @brief Field stencilMaterial offset 0x18
 __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial)) ::UnityEngine::Material*  stencilMaterial;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field stencilID offset 0x24
 __declspec(property(get=__get_stencilID, put=__set_stencilID)) int32_t  stencilID;

constexpr void __set_baseMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_baseMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_baseMaterial() const;

constexpr void __set_stencilMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_stencilMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_stencilMaterial() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_stencilID(int32_t  value) ;

constexpr int32_t& __get_stencilID() ;

constexpr int32_t const& __get_stencilID() const;

static inline ::TMPro::__TMP_MaterialManager__MaskingMaterial* New_ctor() ;

/// @brief Method .ctor addr 0x2c3a9bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__MaskingMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager__MaskingMaterial(__TMP_MaterialManager__MaskingMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__MaskingMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager__MaskingMaterial(__TMP_MaterialManager__MaskingMaterial const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager__MaskingMaterial()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager__MaskingMaterial, 0x28>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::<>c__DisplayClass9_0
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12399))
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass9_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field stencilMaterial offset 0x10
 __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial)) ::UnityEngine::Material*  stencilMaterial;

constexpr void __set_stencilMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_stencilMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_stencilMaterial() const;

static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0* New_ctor() ;

/// @brief Method .ctor addr 0x2c3ad24 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBaseMaterial>b__0 addr 0x2c3cd94 size 0x70 virtual false final false
inline bool _GetBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager____c__DisplayClass9_0(__TMP_MaterialManager____c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager____c__DisplayClass9_0(__TMP_MaterialManager____c__DisplayClass9_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager____c__DisplayClass9_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::<>c__DisplayClass11_0
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12400))
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass11_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field stencilMaterial offset 0x10
 __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial)) ::UnityEngine::Material*  stencilMaterial;

constexpr void __set_stencilMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_stencilMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_stencilMaterial() const;

static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0* New_ctor() ;

/// @brief Method .ctor addr 0x2c3b05c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <AddMaskingMaterial>b__0 addr 0x2c3ce04 size 0x70 virtual false final false
inline bool _AddMaskingMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager____c__DisplayClass11_0(__TMP_MaterialManager____c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager____c__DisplayClass11_0(__TMP_MaterialManager____c__DisplayClass11_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager____c__DisplayClass11_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::<>c__DisplayClass12_0
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12401))
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass12_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field stencilMaterial offset 0x10
 __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial)) ::UnityEngine::Material*  stencilMaterial;

constexpr void __set_stencilMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_stencilMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_stencilMaterial() const;

static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0* New_ctor() ;

/// @brief Method .ctor addr 0x2c3b1c4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RemoveStencilMaterial>b__0 addr 0x2c3ce74 size 0x70 virtual false final false
inline bool _RemoveStencilMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager____c__DisplayClass12_0(__TMP_MaterialManager____c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager____c__DisplayClass12_0(__TMP_MaterialManager____c__DisplayClass12_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager____c__DisplayClass12_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::<>c__DisplayClass13_0
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12402))
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass13_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field baseMaterial offset 0x10
 __declspec(property(get=__get_baseMaterial, put=__set_baseMaterial)) ::UnityEngine::Material*  baseMaterial;

constexpr void __set_baseMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_baseMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_baseMaterial() const;

static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0x2c3b6f8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ReleaseBaseMaterial>b__0 addr 0x2c3cee4 size 0x70 virtual false final false
inline bool _ReleaseBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_MaterialManager____c__DisplayClass13_0(__TMP_MaterialManager____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_MaterialManager____c__DisplayClass13_0(__TMP_MaterialManager____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_MaterialManager____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TMP_MaterialManager
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12403))
// CS Name: ::TMPro::TMP_MaterialManager*
class CORDL_TYPE TMP_MaterialManager : public ::System::Object {
public:
// Declarations
using __c__DisplayClass13_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0;

using __c__DisplayClass12_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0;

using __c__DisplayClass11_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0;

using __c__DisplayClass9_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0;

using MaskingMaterial = ::TMPro::__TMP_MaterialManager__MaskingMaterial;

using FallbackMaterial = ::TMPro::__TMP_MaterialManager__FallbackMaterial;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_materialList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>*  value) ;

static inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* getStaticF_m_materialList() ;

static inline void setStaticF_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t,::TMPro::__TMP_MaterialManager__FallbackMaterial*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::TMPro::__TMP_MaterialManager__FallbackMaterial*>* getStaticF_m_fallbackMaterials() ;

static inline void setStaticF_m_fallbackMaterialLookup(::System::Collections::Generic::Dictionary_2<int32_t,int64_t>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int64_t>* getStaticF_m_fallbackMaterialLookup() ;

static inline void setStaticF_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>*  value) ;

static inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* getStaticF_m_fallbackCleanupList() ;

static inline void setStaticF_isFallbackListDirty(bool  value) ;

static inline bool getStaticF_isFallbackListDirty() ;

/// @brief Method OnPreRender addr 0x2c39890 size 0x78 virtual false final false
static inline void OnPreRender() ;

/// @brief Method GetStencilMaterial addr 0x2c39b1c size 0x3b4 virtual false final false
static inline ::UnityEngine::Material* GetStencilMaterial(::UnityEngine::Material*  baseMaterial, int32_t  stencilID) ;

/// @brief Method ReleaseStencilMaterial addr 0x2c3a9c4 size 0x1fc virtual false final false
static inline void ReleaseStencilMaterial(::UnityEngine::Material*  stencilMaterial) ;

/// @brief Method GetBaseMaterial addr 0x2c3abc0 size 0x164 virtual false final false
static inline ::UnityEngine::Material* GetBaseMaterial(::UnityEngine::Material*  stencilMaterial) ;

/// @brief Method SetStencil addr 0x2c3ad2c size 0xbc virtual false final false
static inline ::UnityEngine::Material* SetStencil(::UnityEngine::Material*  material, int32_t  stencilID) ;

/// @brief Method AddMaskingMaterial addr 0x2c3ade8 size 0x274 virtual false final false
static inline void AddMaskingMaterial(::UnityEngine::Material*  baseMaterial, ::UnityEngine::Material*  stencilMaterial, int32_t  stencilID) ;

/// @brief Method RemoveStencilMaterial addr 0x2c3b064 size 0x160 virtual false final false
static inline void RemoveStencilMaterial(::UnityEngine::Material*  stencilMaterial) ;

/// @brief Method ReleaseBaseMaterial addr 0x2c3b1cc size 0x52c virtual false final false
static inline void ReleaseBaseMaterial(::UnityEngine::Material*  baseMaterial) ;

/// @brief Method ClearMaterials addr 0x2c3b700 size 0x1bc virtual false final false
static inline void ClearMaterials() ;

/// @brief Method GetStencilID addr 0x2c3b8bc size 0x2cc virtual false final false
static inline int32_t GetStencilID(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetMaterialForRendering addr 0x2c3bd28 size 0x1fc virtual false final false
static inline ::UnityEngine::Material* GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic*  graphic, ::UnityEngine::Material*  baseMaterial) ;

/// @brief Method FindRootSortOverrideCanvas addr 0x2c3bb88 size 0x1a0 virtual false final false
static inline ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform*  start) ;

/// @brief Method GetFallbackMaterial addr 0x2c3bf24 size 0x2d0 virtual false final false
static inline ::UnityEngine::Material* GetFallbackMaterial(::TMPro::TMP_FontAsset*  fontAsset, ::UnityEngine::Material*  sourceMaterial, int32_t  atlasIndex) ;

/// @brief Method GetFallbackMaterial addr 0x2c3c468 size 0x420 virtual false final false
static inline ::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::Material*  sourceMaterial, ::UnityEngine::Material*  targetMaterial) ;

/// @brief Method AddFallbackMaterialReference addr 0x2c3c888 size 0x144 virtual false final false
static inline void AddFallbackMaterialReference(::UnityEngine::Material*  targetMaterial) ;

/// @brief Method RemoveFallbackMaterialReference addr 0x2c3c9cc size 0x1d4 virtual false final false
static inline void RemoveFallbackMaterialReference(::UnityEngine::Material*  targetMaterial) ;

/// @brief Method CleanupFallbackMaterials addr 0x2c39908 size 0x214 virtual false final false
static inline void CleanupFallbackMaterials() ;

/// @brief Method ReleaseFallbackMaterial addr 0x2c3cba0 size 0x1f4 virtual false final false
static inline void ReleaseFallbackMaterial(::UnityEngine::Material*  fallbackMaterial) ;

/// @brief Method CopyMaterialPresetProperties addr 0x2c3c1f4 size 0x26c virtual false final false
static inline void CopyMaterialPresetProperties(::UnityEngine::Material*  source, ::UnityEngine::Material*  destination) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_MaterialManager(TMP_MaterialManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_MaterialManager(TMP_MaterialManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_MaterialManager()  = default;
public:


// Fields

// Static field m_materialList

// Static field m_fallbackMaterials

// Static field m_fallbackMaterialLookup

// Static field m_fallbackCleanupList

// Static field isFallbackListDirty


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager*, "TMPro", "TMP_MaterialManager");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager__FallbackMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager__FallbackMaterial*, "TMPro", "TMP_MaterialManager/FallbackMaterial");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager__MaskingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager__MaskingMaterial*, "TMPro", "TMP_MaterialManager/MaskingMaterial");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass11_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass12_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass13_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass9_0");
