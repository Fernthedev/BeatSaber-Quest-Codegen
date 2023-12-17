#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_TOPNetworkData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TOPNetworkData);
// Type: HoudiniEngineUnity::HEU_TOPNetworkData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9770))
// CS Name: ::HoudiniEngineUnity::HEU_TOPNetworkData*
class CORDL_TYPE HEU_TOPNetworkData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _nodeID offset 0x10
 __declspec(property(get=__get__nodeID, put=__set__nodeID)) int32_t  _nodeID;

/// @brief Field _nodeName offset 0x18
 __declspec(property(get=__get__nodeName, put=__set__nodeName)) ::StringW  _nodeName;

/// @brief Field _topNodes offset 0x20
 __declspec(property(get=__get__topNodes, put=__set__topNodes)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*  _topNodes;

/// @brief Field _topNodeNames offset 0x28
 __declspec(property(get=__get__topNodeNames, put=__set__topNodeNames)) ::ArrayW<::StringW,::Array<::StringW>*>  _topNodeNames;

/// @brief Field _selectedTOPIndex offset 0x30
 __declspec(property(get=__get__selectedTOPIndex, put=__set__selectedTOPIndex)) int32_t  _selectedTOPIndex;

/// @brief Field _parentName offset 0x38
 __declspec(property(get=__get__parentName, put=__set__parentName)) ::StringW  _parentName;

/// @brief Field _tags offset 0x40
 __declspec(property(get=__get__tags, put=__set__tags)) ::HoudiniEngineUnity::TOPNodeTags*  _tags;

constexpr void __set__nodeID(int32_t  value) ;

constexpr int32_t& __get__nodeID() ;

constexpr int32_t const& __get__nodeID() const;

constexpr void __set__nodeName(::StringW  value) ;

constexpr ::StringW& __get__nodeName() ;

constexpr ::StringW const& __get__nodeName() const;

constexpr void __set__topNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* __get__topNodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*> __get__topNodes() const;

constexpr void __set__topNodeNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__topNodeNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__topNodeNames() const;

constexpr void __set__selectedTOPIndex(int32_t  value) ;

constexpr int32_t& __get__selectedTOPIndex() ;

constexpr int32_t const& __get__selectedTOPIndex() const;

constexpr void __set__parentName(::StringW  value) ;

constexpr ::StringW& __get__parentName() ;

constexpr ::StringW const& __get__parentName() const;

constexpr void __set__tags(::HoudiniEngineUnity::TOPNodeTags*  value) ;

constexpr ::HoudiniEngineUnity::TOPNodeTags* __get__tags() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::TOPNodeTags*> __get__tags() const;

static inline ::HoudiniEngineUnity::HEU_TOPNetworkData* New_ctor() ;

/// @brief Method .ctor addr 0x219a97c size 0xd8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNetworkData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_TOPNetworkData(HEU_TOPNetworkData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNetworkData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_TOPNetworkData(HEU_TOPNetworkData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_TOPNetworkData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TOPNetworkData, 0x48>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPNetworkData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPNetworkData*, "HoudiniEngineUnity", "HEU_TOPNetworkData");
