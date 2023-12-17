#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateAssetMenuAttribute)
// Forward declare root types
namespace UnityEngine {
class CreateAssetMenuAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CreateAssetMenuAttribute);
// Type: UnityEngine::CreateAssetMenuAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10216))
// CS Name: ::UnityEngine::CreateAssetMenuAttribute*
class CORDL_TYPE CreateAssetMenuAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <menuName>k__BackingField offset 0x10
 __declspec(property(get=__get__menuName_k__BackingField, put=__set__menuName_k__BackingField)) ::StringW  _menuName_k__BackingField;

/// @brief Field <fileName>k__BackingField offset 0x18
 __declspec(property(get=__get__fileName_k__BackingField, put=__set__fileName_k__BackingField)) ::StringW  _fileName_k__BackingField;

 __declspec(property(put=set_menuName)) ::StringW  menuName;

 __declspec(property(put=set_fileName)) ::StringW  fileName;

constexpr void __set__menuName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__menuName_k__BackingField() ;

constexpr ::StringW const& __get__menuName_k__BackingField() const;

constexpr void __set__fileName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__fileName_k__BackingField() ;

constexpr ::StringW const& __get__fileName_k__BackingField() const;

/// @brief Method set_menuName addr 0x2cd281c size 0x8 virtual false final false
inline void set_menuName(::StringW  value) ;

/// @brief Method set_fileName addr 0x2cd2824 size 0x8 virtual false final false
inline void set_fileName(::StringW  value) ;

static inline ::UnityEngine::CreateAssetMenuAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2cd282c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAssetMenuAttribute(CreateAssetMenuAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAssetMenuAttribute(CreateAssetMenuAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CreateAssetMenuAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CreateAssetMenuAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::CreateAssetMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CreateAssetMenuAttribute*, "UnityEngine", "CreateAssetMenuAttribute");
