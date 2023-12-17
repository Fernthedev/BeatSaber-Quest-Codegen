#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HEU_TreePrototypeInfo)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TreePrototypeInfo);
// Type: HoudiniEngineUnity::HEU_TreePrototypeInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9954))
// CS Name: ::HoudiniEngineUnity::HEU_TreePrototypeInfo*
class CORDL_TYPE HEU_TreePrototypeInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _prefabPath offset 0x10
 __declspec(property(get=__get__prefabPath, put=__set__prefabPath)) ::StringW  _prefabPath;

/// @brief Field _bendfactor offset 0x18
 __declspec(property(get=__get__bendfactor, put=__set__bendfactor)) float_t  _bendfactor;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*() noexcept;

constexpr void __set__prefabPath(::StringW  value) ;

constexpr ::StringW& __get__prefabPath() ;

constexpr ::StringW const& __get__prefabPath() const;

constexpr void __set__bendfactor(float_t  value) ;

constexpr float_t& __get__bendfactor() ;

constexpr float_t const& __get__bendfactor() const;

/// @brief Method IsEquivalentTo addr 0x21ea4b8 size 0x14c virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo*  other) ;

static inline ::HoudiniEngineUnity::HEU_TreePrototypeInfo* New_ctor() ;

/// @brief Method .ctor addr 0x21ea604 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_TreePrototypeInfo(HEU_TreePrototypeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_TreePrototypeInfo(HEU_TreePrototypeInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_TreePrototypeInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TreePrototypeInfo, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TreePrototypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TreePrototypeInfo*, "HoudiniEngineUnity", "HEU_TreePrototypeInfo");
