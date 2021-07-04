// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.MaterialReferenceManager
  class MaterialReferenceManager : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material> m_FontMaterialReferenceLookup
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, UnityEngine::Material*>* m_FontMaterialReferenceLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::Material*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_FontAsset> m_FontAssetReferenceLookup
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_FontAsset*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_SpriteAsset> m_SpriteAssetReferenceLookup
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<int, TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_SpriteAsset*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_ColorGradient> m_ColorGradientReferenceLookup
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_ColorGradient*>*) == 0x8);
    // Creating value type constructor for type: MaterialReferenceManager
    MaterialReferenceManager(System::Collections::Generic::Dictionary_2<int, UnityEngine::Material*>* m_FontMaterialReferenceLookup_ = {}, System::Collections::Generic::Dictionary_2<int, TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup_ = {}, System::Collections::Generic::Dictionary_2<int, TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup_ = {}, System::Collections::Generic::Dictionary_2<int, TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup_ = {}) noexcept : m_FontMaterialReferenceLookup{m_FontMaterialReferenceLookup_}, m_FontAssetReferenceLookup{m_FontAssetReferenceLookup_}, m_SpriteAssetReferenceLookup{m_SpriteAssetReferenceLookup_}, m_ColorGradientReferenceLookup{m_ColorGradientReferenceLookup_} {}
    // Get static field: static private TMPro.MaterialReferenceManager s_Instance
    static TMPro::MaterialReferenceManager* _get_s_Instance();
    // Set static field: static private TMPro.MaterialReferenceManager s_Instance
    static void _set_s_Instance(TMPro::MaterialReferenceManager* value);
    // static public TMPro.MaterialReferenceManager get_instance()
    // Offset: 0x10E489C
    static TMPro::MaterialReferenceManager* get_instance();
    // static public System.Void AddFontAsset(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x10E4A00
    static void AddFontAsset(TMPro::TMP_FontAsset* fontAsset);
    // private System.Void AddFontAssetInternal(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x10E4A2C
    void AddFontAssetInternal(TMPro::TMP_FontAsset* fontAsset);
    // static public System.Void AddSpriteAsset(TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4AEC
    static void AddSpriteAsset(TMPro::TMP_SpriteAsset* spriteAsset);
    // private System.Void AddSpriteAssetInternal(TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4B18
    void AddSpriteAssetInternal(TMPro::TMP_SpriteAsset* spriteAsset);
    // static public System.Void AddSpriteAsset(System.Int32 hashCode, TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4BD8
    static void AddSpriteAsset(int hashCode, TMPro::TMP_SpriteAsset* spriteAsset);
    // private System.Void AddSpriteAssetInternal(System.Int32 hashCode, TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4C0C
    void AddSpriteAssetInternal(int hashCode, TMPro::TMP_SpriteAsset* spriteAsset);
    // static public System.Void AddFontMaterial(System.Int32 hashCode, UnityEngine.Material material)
    // Offset: 0x10E4CD0
    static void AddFontMaterial(int hashCode, UnityEngine::Material* material);
    // private System.Void AddFontMaterialInternal(System.Int32 hashCode, UnityEngine.Material material)
    // Offset: 0x10E4D04
    void AddFontMaterialInternal(int hashCode, UnityEngine::Material* material);
    // static public System.Void AddColorGradientPreset(System.Int32 hashCode, TMPro.TMP_ColorGradient spriteAsset)
    // Offset: 0x10E4D74
    static void AddColorGradientPreset(int hashCode, TMPro::TMP_ColorGradient* spriteAsset);
    // private System.Void AddColorGradientPreset_Internal(System.Int32 hashCode, TMPro.TMP_ColorGradient spriteAsset)
    // Offset: 0x10E4DA8
    void AddColorGradientPreset_Internal(int hashCode, TMPro::TMP_ColorGradient* spriteAsset);
    // public System.Boolean Contains(TMPro.TMP_FontAsset font)
    // Offset: 0x10E4E48
    bool Contains(TMPro::TMP_FontAsset* font);
    // public System.Boolean Contains(TMPro.TMP_SpriteAsset sprite)
    // Offset: 0x10E4EB4
    bool Contains(TMPro::TMP_SpriteAsset* sprite);
    // static public System.Boolean TryGetFontAsset(System.Int32 hashCode, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x10E4F20
    static bool TryGetFontAsset(int hashCode, TMPro::TMP_FontAsset*& fontAsset);
    // private System.Boolean TryGetFontAssetInternal(System.Int32 hashCode, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x10E4F54
    bool TryGetFontAssetInternal(int hashCode, TMPro::TMP_FontAsset*& fontAsset);
    // static public System.Boolean TryGetSpriteAsset(System.Int32 hashCode, out TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4FC8
    static bool TryGetSpriteAsset(int hashCode, TMPro::TMP_SpriteAsset*& spriteAsset);
    // private System.Boolean TryGetSpriteAssetInternal(System.Int32 hashCode, out TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x10E4FFC
    bool TryGetSpriteAssetInternal(int hashCode, TMPro::TMP_SpriteAsset*& spriteAsset);
    // static public System.Boolean TryGetColorGradientPreset(System.Int32 hashCode, out TMPro.TMP_ColorGradient gradientPreset)
    // Offset: 0x10E5070
    static bool TryGetColorGradientPreset(int hashCode, TMPro::TMP_ColorGradient*& gradientPreset);
    // private System.Boolean TryGetColorGradientPresetInternal(System.Int32 hashCode, out TMPro.TMP_ColorGradient gradientPreset)
    // Offset: 0x10E50A4
    bool TryGetColorGradientPresetInternal(int hashCode, TMPro::TMP_ColorGradient*& gradientPreset);
    // static public System.Boolean TryGetMaterial(System.Int32 hashCode, out UnityEngine.Material material)
    // Offset: 0x10E5118
    static bool TryGetMaterial(int hashCode, UnityEngine::Material*& material);
    // private System.Boolean TryGetMaterialInternal(System.Int32 hashCode, out UnityEngine.Material material)
    // Offset: 0x10E514C
    bool TryGetMaterialInternal(int hashCode, UnityEngine::Material*& material);
    // public System.Void .ctor()
    // Offset: 0x10E4918
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialReferenceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::MaterialReferenceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialReferenceManager*, creationType>()));
    }
  }; // TMPro.MaterialReferenceManager
  #pragma pack(pop)
  static check_size<sizeof(MaterialReferenceManager), 40 + sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_ColorGradient*>*)> __TMPro_MaterialReferenceManagerSizeCheck;
  static_assert(sizeof(MaterialReferenceManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaterialReferenceManager*, "TMPro", "MaterialReferenceManager");
// Writing includes for template specializations
#include "TMPro/TMP_FontAsset.hpp"
#include "TMPro/TMP_SpriteAsset.hpp"
#include "UnityEngine/Material.hpp"
#include "TMPro/TMP_ColorGradient.hpp"
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::MaterialReferenceManager* (*)()>(&TMPro::MaterialReferenceManager::get_instance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontAsset
// Il2CppName: AddFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::AddFontAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_FontAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontAssetInternal
// Il2CppName: AddFontAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::AddFontAssetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_FontAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAsset
// Il2CppName: AddSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAssetInternal
// Il2CppName: AddSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAsset
// Il2CppName: AddSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAssetInternal
// Il2CppName: AddSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontMaterial
// Il2CppName: AddFontMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::Material*)>(&TMPro::MaterialReferenceManager::AddFontMaterial)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Material*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontMaterialInternal
// Il2CppName: AddFontMaterialInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, UnityEngine::Material*)>(&TMPro::MaterialReferenceManager::AddFontMaterialInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontMaterialInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Material*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddColorGradientPreset
// Il2CppName: AddColorGradientPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, TMPro::TMP_ColorGradient*)>(&TMPro::MaterialReferenceManager::AddColorGradientPreset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddColorGradientPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_ColorGradient*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal
// Il2CppName: AddColorGradientPreset_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, TMPro::TMP_ColorGradient*)>(&TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddColorGradientPreset_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_ColorGradient*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::Contains)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_FontAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::Contains)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetFontAsset
// Il2CppName: TryGetFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, TMPro::TMP_FontAsset*&)>(&TMPro::MaterialReferenceManager::TryGetFontAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_FontAsset*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetFontAssetInternal
// Il2CppName: TryGetFontAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, TMPro::TMP_FontAsset*&)>(&TMPro::MaterialReferenceManager::TryGetFontAssetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetFontAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_FontAsset*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetSpriteAsset
// Il2CppName: TryGetSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, TMPro::TMP_SpriteAsset*&)>(&TMPro::MaterialReferenceManager::TryGetSpriteAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal
// Il2CppName: TryGetSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, TMPro::TMP_SpriteAsset*&)>(&TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_SpriteAsset*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetColorGradientPreset
// Il2CppName: TryGetColorGradientPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, TMPro::TMP_ColorGradient*&)>(&TMPro::MaterialReferenceManager::TryGetColorGradientPreset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetColorGradientPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_ColorGradient*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal
// Il2CppName: TryGetColorGradientPresetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, TMPro::TMP_ColorGradient*&)>(&TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetColorGradientPresetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<TMPro::TMP_ColorGradient*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetMaterial
// Il2CppName: TryGetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, UnityEngine::Material*&)>(&TMPro::MaterialReferenceManager::TryGetMaterial)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Material*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetMaterialInternal
// Il2CppName: TryGetMaterialInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, UnityEngine::Material*&)>(&TMPro::MaterialReferenceManager::TryGetMaterialInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetMaterialInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Material*&>()});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
