// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Size because it is already included!
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_PlayArea
  // [ExecuteInEditMode] Offset: DD30C8
  // [RequireComponent] Offset: DD30C8
  class SteamVR_PlayArea : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_PlayArea::Size
    struct Size;
    // Nested type: GlobalNamespace::SteamVR_PlayArea::$UpdateBounds$d__14
    class $UpdateBounds$d__14;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SteamVR_PlayArea/Size
    struct Size/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Size
      constexpr Size(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SteamVR_PlayArea/Size Calibrated
      static constexpr const int Calibrated = 0;
      // Get static field: static public SteamVR_PlayArea/Size Calibrated
      static GlobalNamespace::SteamVR_PlayArea::Size _get_Calibrated();
      // Set static field: static public SteamVR_PlayArea/Size Calibrated
      static void _set_Calibrated(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _400x300
      static constexpr const int _400x300 = 1;
      // Get static field: static public SteamVR_PlayArea/Size _400x300
      static GlobalNamespace::SteamVR_PlayArea::Size _get__400x300();
      // Set static field: static public SteamVR_PlayArea/Size _400x300
      static void _set__400x300(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _300x225
      static constexpr const int _300x225 = 2;
      // Get static field: static public SteamVR_PlayArea/Size _300x225
      static GlobalNamespace::SteamVR_PlayArea::Size _get__300x225();
      // Set static field: static public SteamVR_PlayArea/Size _300x225
      static void _set__300x225(GlobalNamespace::SteamVR_PlayArea::Size value);
      // static field const value: static public SteamVR_PlayArea/Size _200x150
      static constexpr const int _200x150 = 3;
      // Get static field: static public SteamVR_PlayArea/Size _200x150
      static GlobalNamespace::SteamVR_PlayArea::Size _get__200x150();
      // Set static field: static public SteamVR_PlayArea/Size _200x150
      static void _set__200x150(GlobalNamespace::SteamVR_PlayArea::Size value);
    }; // SteamVR_PlayArea/Size
    #pragma pack(pop)
    static check_size<sizeof(SteamVR_PlayArea::Size), 0 + sizeof(int)> __GlobalNamespace_SteamVR_PlayArea_SizeSizeCheck;
    static_assert(sizeof(SteamVR_PlayArea::Size) == 0x4);
    // public System.Single borderThickness
    // Size: 0x4
    // Offset: 0x18
    float borderThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single wireframeHeight
    // Size: 0x4
    // Offset: 0x1C
    float wireframeHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean drawWireframeWhenSelectedOnly
    // Size: 0x1
    // Offset: 0x20
    bool drawWireframeWhenSelectedOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean drawInGame
    // Size: 0x1
    // Offset: 0x21
    bool drawInGame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: drawInGame and: size
    char __padding3[0x2] = {};
    // public SteamVR_PlayArea/Size size
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::SteamVR_PlayArea::Size size;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_PlayArea::Size) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [HideInInspector] Offset: 0xDD4B84
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Vector3>* vertices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: SteamVR_PlayArea
    SteamVR_PlayArea(float borderThickness_ = {}, float wireframeHeight_ = {}, bool drawWireframeWhenSelectedOnly_ = {}, bool drawInGame_ = {}, GlobalNamespace::SteamVR_PlayArea::Size size_ = {}, UnityEngine::Color color_ = {}, ::Array<UnityEngine::Vector3>* vertices_ = {}) noexcept : borderThickness{borderThickness_}, wireframeHeight{wireframeHeight_}, drawWireframeWhenSelectedOnly{drawWireframeWhenSelectedOnly_}, drawInGame{drawInGame_}, size{size_}, color{color_}, vertices{vertices_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static public System.Boolean GetBounds(SteamVR_PlayArea/Size size, ref Valve.VR.HmdQuad_t pRect)
    // Offset: 0x13D7C40
    static bool GetBounds(GlobalNamespace::SteamVR_PlayArea::Size size, Valve::VR::HmdQuad_t& pRect);
    // public System.Void BuildMesh()
    // Offset: 0x13D7FC4
    void BuildMesh();
    // private System.Void OnDrawGizmos()
    // Offset: 0x13D880C
    void OnDrawGizmos();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x13D8AA0
    void OnDrawGizmosSelected();
    // public System.Void DrawWireframe()
    // Offset: 0x13D881C
    void DrawWireframe();
    // public System.Void OnEnable()
    // Offset: 0x13D8AB0
    void OnEnable();
    // private System.Collections.IEnumerator UpdateBounds()
    // Offset: 0x13D8B64
    System::Collections::IEnumerator* UpdateBounds();
    // public System.Void .ctor()
    // Offset: 0x13D8C00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_PlayArea* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_PlayArea::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_PlayArea*, creationType>()));
    }
  }; // SteamVR_PlayArea
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_PlayArea), 56 + sizeof(::Array<UnityEngine::Vector3>*)> __GlobalNamespace_SteamVR_PlayAreaSizeCheck;
  static_assert(sizeof(SteamVR_PlayArea) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_PlayArea*, "", "SteamVR_PlayArea");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_PlayArea::Size, "", "SteamVR_PlayArea/Size");
// Writing includes for template specializations
#include "Valve/VR/HmdQuad_t.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::GetBounds
// Il2CppName: GetBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::SteamVR_PlayArea::Size, Valve::VR::HmdQuad_t&)>(&GlobalNamespace::SteamVR_PlayArea::GetBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "GetBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SteamVR_PlayArea::Size>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::HmdQuad_t&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::BuildMesh
// Il2CppName: BuildMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::BuildMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "BuildMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::OnDrawGizmos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::OnDrawGizmosSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::DrawWireframe
// Il2CppName: DrawWireframe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::DrawWireframe)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "DrawWireframe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::UpdateBounds
// Il2CppName: UpdateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SteamVR_PlayArea::*)()>(&GlobalNamespace::SteamVR_PlayArea::UpdateBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_PlayArea*), "UpdateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_PlayArea::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
